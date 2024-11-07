// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice

#ifndef COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__STRUCT_H_
#define COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"

/// Struct defined in srv/ComputeGrasp in the package compute_grasp_interface.
typedef struct compute_grasp_interface__srv__ComputeGrasp_Request
{
  geometry_msgs__msg__PointStamped target;
} compute_grasp_interface__srv__ComputeGrasp_Request;

// Struct for a sequence of compute_grasp_interface__srv__ComputeGrasp_Request.
typedef struct compute_grasp_interface__srv__ComputeGrasp_Request__Sequence
{
  compute_grasp_interface__srv__ComputeGrasp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compute_grasp_interface__srv__ComputeGrasp_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/ComputeGrasp in the package compute_grasp_interface.
typedef struct compute_grasp_interface__srv__ComputeGrasp_Response
{
  geometry_msgs__msg__PoseStamped target;
} compute_grasp_interface__srv__ComputeGrasp_Response;

// Struct for a sequence of compute_grasp_interface__srv__ComputeGrasp_Response.
typedef struct compute_grasp_interface__srv__ComputeGrasp_Response__Sequence
{
  compute_grasp_interface__srv__ComputeGrasp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} compute_grasp_interface__srv__ComputeGrasp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__STRUCT_H_
