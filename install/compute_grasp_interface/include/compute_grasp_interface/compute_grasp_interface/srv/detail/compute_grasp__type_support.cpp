// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "compute_grasp_interface/srv/detail/compute_grasp__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace compute_grasp_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputeGrasp_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) compute_grasp_interface::srv::ComputeGrasp_Request(_init);
}

void ComputeGrasp_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<compute_grasp_interface::srv::ComputeGrasp_Request *>(message_memory);
  typed_message->~ComputeGrasp_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputeGrasp_Request_message_member_array[1] = {
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PointStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compute_grasp_interface::srv::ComputeGrasp_Request, target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputeGrasp_Request_message_members = {
  "compute_grasp_interface::srv",  // message namespace
  "ComputeGrasp_Request",  // message name
  1,  // number of fields
  sizeof(compute_grasp_interface::srv::ComputeGrasp_Request),
  ComputeGrasp_Request_message_member_array,  // message members
  ComputeGrasp_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputeGrasp_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputeGrasp_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputeGrasp_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace compute_grasp_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<compute_grasp_interface::srv::ComputeGrasp_Request>()
{
  return &::compute_grasp_interface::srv::rosidl_typesupport_introspection_cpp::ComputeGrasp_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compute_grasp_interface, srv, ComputeGrasp_Request)() {
  return &::compute_grasp_interface::srv::rosidl_typesupport_introspection_cpp::ComputeGrasp_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "compute_grasp_interface/srv/detail/compute_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace compute_grasp_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputeGrasp_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) compute_grasp_interface::srv::ComputeGrasp_Response(_init);
}

void ComputeGrasp_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<compute_grasp_interface::srv::ComputeGrasp_Response *>(message_memory);
  typed_message->~ComputeGrasp_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputeGrasp_Response_message_member_array[1] = {
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compute_grasp_interface::srv::ComputeGrasp_Response, target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputeGrasp_Response_message_members = {
  "compute_grasp_interface::srv",  // message namespace
  "ComputeGrasp_Response",  // message name
  1,  // number of fields
  sizeof(compute_grasp_interface::srv::ComputeGrasp_Response),
  ComputeGrasp_Response_message_member_array,  // message members
  ComputeGrasp_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputeGrasp_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputeGrasp_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputeGrasp_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace compute_grasp_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<compute_grasp_interface::srv::ComputeGrasp_Response>()
{
  return &::compute_grasp_interface::srv::rosidl_typesupport_introspection_cpp::ComputeGrasp_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compute_grasp_interface, srv, ComputeGrasp_Response)() {
  return &::compute_grasp_interface::srv::rosidl_typesupport_introspection_cpp::ComputeGrasp_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "compute_grasp_interface/srv/detail/compute_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace compute_grasp_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ComputeGrasp_service_members = {
  "compute_grasp_interface::srv",  // service namespace
  "ComputeGrasp",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<compute_grasp_interface::srv::ComputeGrasp>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ComputeGrasp_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputeGrasp_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace compute_grasp_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<compute_grasp_interface::srv::ComputeGrasp>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::compute_grasp_interface::srv::rosidl_typesupport_introspection_cpp::ComputeGrasp_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::compute_grasp_interface::srv::ComputeGrasp_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::compute_grasp_interface::srv::ComputeGrasp_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, compute_grasp_interface, srv, ComputeGrasp)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<compute_grasp_interface::srv::ComputeGrasp>();
}

#ifdef __cplusplus
}
#endif
