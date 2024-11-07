// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice

#ifndef COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__BUILDER_HPP_
#define COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "compute_grasp_interface/srv/detail/compute_grasp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace compute_grasp_interface
{

namespace srv
{

namespace builder
{

class Init_ComputeGrasp_Request_target
{
public:
  Init_ComputeGrasp_Request_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compute_grasp_interface::srv::ComputeGrasp_Request target(::compute_grasp_interface::srv::ComputeGrasp_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compute_grasp_interface::srv::ComputeGrasp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compute_grasp_interface::srv::ComputeGrasp_Request>()
{
  return compute_grasp_interface::srv::builder::Init_ComputeGrasp_Request_target();
}

}  // namespace compute_grasp_interface


namespace compute_grasp_interface
{

namespace srv
{

namespace builder
{

class Init_ComputeGrasp_Response_target
{
public:
  Init_ComputeGrasp_Response_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::compute_grasp_interface::srv::ComputeGrasp_Response target(::compute_grasp_interface::srv::ComputeGrasp_Response::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::compute_grasp_interface::srv::ComputeGrasp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::compute_grasp_interface::srv::ComputeGrasp_Response>()
{
  return compute_grasp_interface::srv::builder::Init_ComputeGrasp_Response_target();
}

}  // namespace compute_grasp_interface

#endif  // COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__BUILDER_HPP_
