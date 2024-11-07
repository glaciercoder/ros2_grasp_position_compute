// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice

#ifndef COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "compute_grasp_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "compute_grasp_interface/srv/detail/compute_grasp__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace compute_grasp_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
cdr_serialize(
  const compute_grasp_interface::srv::ComputeGrasp_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  compute_grasp_interface::srv::ComputeGrasp_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
get_serialized_size(
  const compute_grasp_interface::srv::ComputeGrasp_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
max_serialized_size_ComputeGrasp_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace compute_grasp_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compute_grasp_interface, srv, ComputeGrasp_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "compute_grasp_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "compute_grasp_interface/srv/detail/compute_grasp__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace compute_grasp_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
cdr_serialize(
  const compute_grasp_interface::srv::ComputeGrasp_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  compute_grasp_interface::srv::ComputeGrasp_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
get_serialized_size(
  const compute_grasp_interface::srv::ComputeGrasp_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
max_serialized_size_ComputeGrasp_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace compute_grasp_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compute_grasp_interface, srv, ComputeGrasp_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "compute_grasp_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_compute_grasp_interface
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, compute_grasp_interface, srv, ComputeGrasp)();

#ifdef __cplusplus
}
#endif

#endif  // COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
