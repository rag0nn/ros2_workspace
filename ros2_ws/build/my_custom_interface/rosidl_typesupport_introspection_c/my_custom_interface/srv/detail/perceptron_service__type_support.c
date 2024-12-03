// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_custom_interface:srv/PerceptronService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_custom_interface/srv/detail/perceptron_service__rosidl_typesupport_introspection_c.h"
#include "my_custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_custom_interface/srv/detail/perceptron_service__functions.h"
#include "my_custom_interface/srv/detail/perceptron_service__struct.h"


// Include directives for member types
// Member `inputs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `activation`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_custom_interface__srv__PerceptronService_Request__init(message_memory);
}

void my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_fini_function(void * message_memory)
{
  my_custom_interface__srv__PerceptronService_Request__fini(message_memory);
}

size_t my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__size_function__PerceptronService_Request__inputs(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__get_const_function__PerceptronService_Request__inputs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__get_function__PerceptronService_Request__inputs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__fetch_function__PerceptronService_Request__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__get_const_function__PerceptronService_Request__inputs(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__assign_function__PerceptronService_Request__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__get_function__PerceptronService_Request__inputs(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__resize_function__PerceptronService_Request__inputs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_message_member_array[2] = {
  {
    "inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_custom_interface__srv__PerceptronService_Request, inputs),  // bytes offset in struct
    NULL,  // default value
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__size_function__PerceptronService_Request__inputs,  // size() function pointer
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__get_const_function__PerceptronService_Request__inputs,  // get_const(index) function pointer
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__get_function__PerceptronService_Request__inputs,  // get(index) function pointer
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__fetch_function__PerceptronService_Request__inputs,  // fetch(index, &value) function pointer
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__assign_function__PerceptronService_Request__inputs,  // assign(index, value) function pointer
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__resize_function__PerceptronService_Request__inputs  // resize(index) function pointer
  },
  {
    "activation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_custom_interface__srv__PerceptronService_Request, activation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_message_members = {
  "my_custom_interface__srv",  // message namespace
  "PerceptronService_Request",  // message name
  2,  // number of fields
  sizeof(my_custom_interface__srv__PerceptronService_Request),
  my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_message_member_array,  // message members
  my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_message_type_support_handle = {
  0,
  &my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_interface, srv, PerceptronService_Request)() {
  if (!my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_message_type_support_handle.typesupport_identifier) {
    my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_custom_interface__srv__PerceptronService_Request__rosidl_typesupport_introspection_c__PerceptronService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_custom_interface/srv/detail/perceptron_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_custom_interface/srv/detail/perceptron_service__functions.h"
// already included above
// #include "my_custom_interface/srv/detail/perceptron_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_custom_interface__srv__PerceptronService_Response__init(message_memory);
}

void my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_fini_function(void * message_memory)
{
  my_custom_interface__srv__PerceptronService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_custom_interface__srv__PerceptronService_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_message_members = {
  "my_custom_interface__srv",  // message namespace
  "PerceptronService_Response",  // message name
  1,  // number of fields
  sizeof(my_custom_interface__srv__PerceptronService_Response),
  my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_message_member_array,  // message members
  my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_message_type_support_handle = {
  0,
  &my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_interface, srv, PerceptronService_Response)() {
  if (!my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_message_type_support_handle.typesupport_identifier) {
    my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_custom_interface__srv__PerceptronService_Response__rosidl_typesupport_introspection_c__PerceptronService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_custom_interface/srv/detail/perceptron_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_service_members = {
  "my_custom_interface__srv",  // service namespace
  "PerceptronService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_Request_message_type_support_handle,
  NULL  // response message
  // my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_service_type_support_handle = {
  0,
  &my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_interface, srv, PerceptronService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_interface, srv, PerceptronService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_custom_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_interface, srv, PerceptronService)() {
  if (!my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_service_type_support_handle.typesupport_identifier) {
    my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_interface, srv, PerceptronService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_interface, srv, PerceptronService_Response)()->data;
  }

  return &my_custom_interface__srv__detail__perceptron_service__rosidl_typesupport_introspection_c__PerceptronService_service_type_support_handle;
}
