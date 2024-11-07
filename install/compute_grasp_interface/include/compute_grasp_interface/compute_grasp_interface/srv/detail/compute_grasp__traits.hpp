// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice

#ifndef COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__TRAITS_HPP_
#define COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "compute_grasp_interface/srv/detail/compute_grasp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace compute_grasp_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeGrasp_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeGrasp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeGrasp_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace compute_grasp_interface

namespace rosidl_generator_traits
{

[[deprecated("use compute_grasp_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const compute_grasp_interface::srv::ComputeGrasp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  compute_grasp_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compute_grasp_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const compute_grasp_interface::srv::ComputeGrasp_Request & msg)
{
  return compute_grasp_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compute_grasp_interface::srv::ComputeGrasp_Request>()
{
  return "compute_grasp_interface::srv::ComputeGrasp_Request";
}

template<>
inline const char * name<compute_grasp_interface::srv::ComputeGrasp_Request>()
{
  return "compute_grasp_interface/srv/ComputeGrasp_Request";
}

template<>
struct has_fixed_size<compute_grasp_interface::srv::ComputeGrasp_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct has_bounded_size<compute_grasp_interface::srv::ComputeGrasp_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct is_message<compute_grasp_interface::srv::ComputeGrasp_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace compute_grasp_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeGrasp_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeGrasp_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeGrasp_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace compute_grasp_interface

namespace rosidl_generator_traits
{

[[deprecated("use compute_grasp_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const compute_grasp_interface::srv::ComputeGrasp_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  compute_grasp_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use compute_grasp_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const compute_grasp_interface::srv::ComputeGrasp_Response & msg)
{
  return compute_grasp_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<compute_grasp_interface::srv::ComputeGrasp_Response>()
{
  return "compute_grasp_interface::srv::ComputeGrasp_Response";
}

template<>
inline const char * name<compute_grasp_interface::srv::ComputeGrasp_Response>()
{
  return "compute_grasp_interface/srv/ComputeGrasp_Response";
}

template<>
struct has_fixed_size<compute_grasp_interface::srv::ComputeGrasp_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<compute_grasp_interface::srv::ComputeGrasp_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<compute_grasp_interface::srv::ComputeGrasp_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<compute_grasp_interface::srv::ComputeGrasp>()
{
  return "compute_grasp_interface::srv::ComputeGrasp";
}

template<>
inline const char * name<compute_grasp_interface::srv::ComputeGrasp>()
{
  return "compute_grasp_interface/srv/ComputeGrasp";
}

template<>
struct has_fixed_size<compute_grasp_interface::srv::ComputeGrasp>
  : std::integral_constant<
    bool,
    has_fixed_size<compute_grasp_interface::srv::ComputeGrasp_Request>::value &&
    has_fixed_size<compute_grasp_interface::srv::ComputeGrasp_Response>::value
  >
{
};

template<>
struct has_bounded_size<compute_grasp_interface::srv::ComputeGrasp>
  : std::integral_constant<
    bool,
    has_bounded_size<compute_grasp_interface::srv::ComputeGrasp_Request>::value &&
    has_bounded_size<compute_grasp_interface::srv::ComputeGrasp_Response>::value
  >
{
};

template<>
struct is_service<compute_grasp_interface::srv::ComputeGrasp>
  : std::true_type
{
};

template<>
struct is_service_request<compute_grasp_interface::srv::ComputeGrasp_Request>
  : std::true_type
{
};

template<>
struct is_service_response<compute_grasp_interface::srv::ComputeGrasp_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__TRAITS_HPP_
