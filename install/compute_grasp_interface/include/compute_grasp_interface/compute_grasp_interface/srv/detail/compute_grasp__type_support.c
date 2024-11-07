// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "compute_grasp_interface/srv/detail/compute_grasp__rosidl_typesupport_introspection_c.h"
#include "compute_grasp_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "compute_grasp_interface/srv/detail/compute_grasp__functions.h"
#include "compute_grasp_interface/srv/detail/compute_grasp__struct.h"


// Include directives for member types
// Member `target`
#include "geometry_msgs/msg/point_stamped.h"
// Member `target`
#include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  compute_grasp_interface__srv__ComputeGrasp_Request__init(message_memory);
}

void compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_fini_function(void * message_memory)
{
  compute_grasp_interface__srv__ComputeGrasp_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_member_array[1] = {
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compute_grasp_interface__srv__ComputeGrasp_Request, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_members = {
  "compute_grasp_interface__srv",  // message namespace
  "ComputeGrasp_Request",  // message name
  1,  // number of fields
  sizeof(compute_grasp_interface__srv__ComputeGrasp_Request),
  compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_member_array,  // message members
  compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_type_support_handle = {
  0,
  &compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_compute_grasp_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compute_grasp_interface, srv, ComputeGrasp_Request)() {
  compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_type_support_handle.typesupport_identifier) {
    compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &compute_grasp_interface__srv__ComputeGrasp_Request__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "compute_grasp_interface/srv/detail/compute_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "compute_grasp_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "compute_grasp_interface/srv/detail/compute_grasp__functions.h"
// already included above
// #include "compute_grasp_interface/srv/detail/compute_grasp__struct.h"


// Include directives for member types
// Member `target`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `target`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  compute_grasp_interface__srv__ComputeGrasp_Response__init(message_memory);
}

void compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_fini_function(void * message_memory)
{
  compute_grasp_interface__srv__ComputeGrasp_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_member_array[1] = {
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(compute_grasp_interface__srv__ComputeGrasp_Response, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_members = {
  "compute_grasp_interface__srv",  // message namespace
  "ComputeGrasp_Response",  // message name
  1,  // number of fields
  sizeof(compute_grasp_interface__srv__ComputeGrasp_Response),
  compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_member_array,  // message members
  compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_type_support_handle = {
  0,
  &compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_compute_grasp_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compute_grasp_interface, srv, ComputeGrasp_Response)() {
  compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_type_support_handle.typesupport_identifier) {
    compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &compute_grasp_interface__srv__ComputeGrasp_Response__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "compute_grasp_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "compute_grasp_interface/srv/detail/compute_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_service_members = {
  "compute_grasp_interface__srv",  // service namespace
  "ComputeGrasp",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_Request_message_type_support_handle,
  NULL  // response message
  // compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_Response_message_type_support_handle
};

static rosidl_service_type_support_t compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_service_type_support_handle = {
  0,
  &compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compute_grasp_interface, srv, ComputeGrasp_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compute_grasp_interface, srv, ComputeGrasp_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_compute_grasp_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compute_grasp_interface, srv, ComputeGrasp)() {
  if (!compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_service_type_support_handle.typesupport_identifier) {
    compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compute_grasp_interface, srv, ComputeGrasp_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, compute_grasp_interface, srv, ComputeGrasp_Response)()->data;
  }

  return &compute_grasp_interface__srv__detail__compute_grasp__rosidl_typesupport_introspection_c__ComputeGrasp_service_type_support_handle;
}
