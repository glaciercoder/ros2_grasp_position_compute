import math
from geometry_msgs.msg import PoseStamped
from nav_msgs.msg import OccupancyGrid
import rclpy
import asyncio
from rclpy.action import ActionClient
from rclpy.node import Node

from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import PoseStamped, Pose
from geometry_msgs.msg import Pose
from tf2_ros.transform_listener import TransformListener
from tf2_ros.buffer import Buffer
from tf2_ros import LookupException
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from action_msgs.msg import GoalStatus
from nav_msgs.msg import Odometry, OccupancyGrid
from geometry_msgs.msg import Quaternion
from tf_transformations import quaternion_from_euler
from collections import deque


class Compute_grasp_position_server(Node):
    def __init__(self):
        super().__init__('grasp_position_server')
        # Callback grouop
        sub_cb = MutuallyExclusiveCallbackGroup()

        # Parameters
        self.declare_parameter('self.search_scale', '50')
        self.declare_parameter('self.arm_length', '0.2')
        self.search_scale = int(self.get_parameter('self.search_scale').get_parameter_value()._string_value)
        self.arm_length = float(self.get_parameter('self.arm_length').get_parameter_value()._string_value)

        # Subs, server
        self.map_sub = self.create_subscription(OccupancyGrid, '/map', self.mapCallback, callback_group=sub_cb)
        self.odom_sub = self.create_subscription(Odometry, '/odometry/filtered', self.odomCallback, callback_group=sub_cb)


        # Data
        self.map = None
        self.current_pos = None


    def calculate_goal_pose_on_map(self, center_pose: PoseStamped, map_msg: OccupancyGrid):
        self.current_x = self.current_pos.position.x
        self.current_y = self.current_pos.position.y
        
        goal_pose = PoseStamped()

        goal_pose.header = center_pose.header

        map_width = map_msg.info.width
        map_height = map_msg.info.height
        map_resolution = map_msg.info.resolution
        map_origin_x = map_msg.info.origin.position.x
        map_origin_y = map_msg.info.origin.position.y

        map_coordinate_x = int((center_pose.pose.position.x - map_origin_x) / map_resolution)
        map_coordinate_y = int((center_pose.pose.position.y - map_origin_y) / map_resolution)

        target_x = center_pose.pose.position.x
        target_y = center_pose.pose.position.y
        select_x, select_y = target_x, target_y

        s_best = float('inf')
        self.get_logger().info(f"Map width: {map_width}, height: {map_height}, resolution: {map_resolution}, origin_x: {map_origin_x}, origin_y: {map_origin_y}")
        self.get_logger().info(f"map_coordinate_x: {map_coordinate_x}, map_coordinate_y: {map_coordinate_y}")

        for i in range(map_coordinate_x - self.search_scale, map_coordinate_x + self.search_scale + 1):
            if i <= 0 or i >= map_width:
                continue
            for j in range(map_coordinate_y - self.search_scale, map_coordinate_y + self.search_scale + 1):
                if j <= 0 or j >= map_height:
                    continue

                map_index = i + j * map_width
                if map_msg.data[map_index] == 0:
                    select_x = map_origin_x + i * map_resolution
                    select_y = map_origin_y + j * map_resolution

                    s0 = math.sqrt((self.current_x - target_x) ** 2 + (self.current_y - target_y) ** 2)
                    s1 = math.sqrt((select_x - target_x) ** 2 + (select_y - target_y) ** 2)
                    s2 = self.arm_length - min(s1, self.arm_length)

                    obs_index_x, obs_index_y = self.bfs_nearest_obstacle(i, j, map_msg)
                    nearest_obs_x = map_origin_x + obs_index_x * map_resolution
                    nearest_obs_y = map_origin_y + obs_index_y * map_resolution

                    obstacle_dis = math.sqrt((nearest_obs_x - select_x) ** 2 + (nearest_obs_y - select_y) ** 2)
                    s3 = 0 if obstacle_dis > 10 else 1 / obstacle_dis

                    s = 2 * s1 + 1 * s2 + 2 * s3
                    self.get_logger().info(f"s1: {s1}, s2: {s2}, s3: {s3}, s: {s}")
                    if s < s_best:
                        s_best = s
                        goal_pose.pose.position.x = select_x
                        goal_pose.pose.position.y = select_y
                        goal_pose.pose.position.z = 0.0
                        yaw = math.atan2(target_y-select_y, target_x-select_x)
                        q = quaternion_from_euler(0,0,yaw)
                        goal_pose.pose.orientation.x = q[0]
                        goal_pose.pose.orientation.y = q[1]
                        goal_pose.pose.orientation.z = q[2]
                        goal_pose.pose.orientation.w = q[3]

        return goal_pose
    
    def bfs_nearest_obstacle(self, start_x, start_y, map_msg: OccupancyGrid):
        """Find the nearest obstacle from the start point in an occupancy grid map using BFS."""
        
        map_width = map_msg.info.width
        map_height = map_msg.info.height
        data = map_msg.data  # Flattened 1D array representing occupancy grid data
        
        # Directions: up, right, down, left
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        
        # Initialize queue for BFS
        queue = deque([(start_x, start_y)])
        visited = [[False for _ in range(map_height)] for _ in range(map_width)]
        visited[start_x][start_y] = True
        
        while queue:
            x, y = queue.popleft()
            
            # Check if the current cell is an obstacle (non-zero value in map data)
            map_index = x + y * map_width
            if data[map_index] != 0:
                return (x, y)
            
            # Explore neighboring cells
            for dx, dy in directions:
                new_x, new_y = x + dx, y + dy
                
                # Check bounds and visited status
                if 0 <= new_x < map_width and 0 <= new_y < map_height and not visited[new_x][new_y]:
                    visited[new_x][new_y] = True
                    queue.append((new_x, new_y))
        
        # If no obstacle is found, return an invalid position
        return (-1, -1)
    
    def mapCallback(self, msg):
        self.map = msg

    def odomCallback(self, msg):
        self.current_pos = msg.pose.pose