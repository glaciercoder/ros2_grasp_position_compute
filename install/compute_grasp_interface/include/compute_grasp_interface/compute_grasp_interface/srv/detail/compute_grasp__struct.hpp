// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice

#ifndef COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__STRUCT_HPP_
#define COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compute_grasp_interface__srv__ComputeGrasp_Request __attribute__((deprecated))
#else
# define DEPRECATED__compute_grasp_interface__srv__ComputeGrasp_Request __declspec(deprecated)
#endif

namespace compute_grasp_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeGrasp_Request_
{
  using Type = ComputeGrasp_Request_<ContainerAllocator>;

  explicit ComputeGrasp_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    (void)_init;
  }

  explicit ComputeGrasp_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compute_grasp_interface__srv__ComputeGrasp_Request
    std::shared_ptr<compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compute_grasp_interface__srv__ComputeGrasp_Request
    std::shared_ptr<compute_grasp_interface::srv::ComputeGrasp_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeGrasp_Request_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeGrasp_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeGrasp_Request_

// alias to use template instance with default allocator
using ComputeGrasp_Request =
  compute_grasp_interface::srv::ComputeGrasp_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compute_grasp_interface


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__compute_grasp_interface__srv__ComputeGrasp_Response __attribute__((deprecated))
#else
# define DEPRECATED__compute_grasp_interface__srv__ComputeGrasp_Response __declspec(deprecated)
#endif

namespace compute_grasp_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeGrasp_Response_
{
  using Type = ComputeGrasp_Response_<ContainerAllocator>;

  explicit ComputeGrasp_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    (void)_init;
  }

  explicit ComputeGrasp_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__compute_grasp_interface__srv__ComputeGrasp_Response
    std::shared_ptr<compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__compute_grasp_interface__srv__ComputeGrasp_Response
    std::shared_ptr<compute_grasp_interface::srv::ComputeGrasp_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeGrasp_Response_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeGrasp_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeGrasp_Response_

// alias to use template instance with default allocator
using ComputeGrasp_Response =
  compute_grasp_interface::srv::ComputeGrasp_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace compute_grasp_interface

namespace compute_grasp_interface
{

namespace srv
{

struct ComputeGrasp
{
  using Request = compute_grasp_interface::srv::ComputeGrasp_Request;
  using Response = compute_grasp_interface::srv::ComputeGrasp_Response;
};

}  // namespace srv

}  // namespace compute_grasp_interface

#endif  // COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__STRUCT_HPP_
