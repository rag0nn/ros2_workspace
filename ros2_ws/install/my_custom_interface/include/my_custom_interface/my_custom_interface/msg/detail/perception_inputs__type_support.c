// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_custom_interface:msg/PerceptionInputs.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_custom_interface/msg/detail/perception_inputs__rosidl_typesupport_introspection_c.h"
#include "my_custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_custom_interface/msg/detail/perception_inputs__functions.h"
#include "my_custom_interface/msg/detail/perception_inputs__struct.h"


// Include directives for member types
// Member `inputs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `activation`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_custom_interface__msg__PerceptionInputs__init(message_memory);
}

void my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_fini_function(void * message_memory)
{
  my_custom_interface__msg__PerceptionInputs__fini(message_memory);
}

size_t my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__size_function__PerceptionInputs__inputs(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__get_const_function__PerceptionInputs__inputs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__get_function__PerceptionInputs__inputs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__fetch_function__PerceptionInputs__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__get_const_function__PerceptionInputs__inputs(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__assign_function__PerceptionInputs__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__get_function__PerceptionInputs__inputs(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__resize_function__PerceptionInputs__inputs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_message_member_array[2] = {
  {
    "inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_custom_interface__msg__PerceptionInputs, inputs),  // bytes offset in struct
    NULL,  // default value
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__size_function__PerceptionInputs__inputs,  // size() function pointer
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__get_const_function__PerceptionInputs__inputs,  // get_const(index) function pointer
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__get_function__PerceptionInputs__inputs,  // get(index) function pointer
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__fetch_function__PerceptionInputs__inputs,  // fetch(index, &value) function pointer
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__assign_function__PerceptionInputs__inputs,  // assign(index, value) function pointer
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__resize_function__PerceptionInputs__inputs  // resize(index) function pointer
  },
  {
    "activation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_custom_interface__msg__PerceptionInputs, activation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_message_members = {
  "my_custom_interface__msg",  // message namespace
  "PerceptionInputs",  // message name
  2,  // number of fields
  sizeof(my_custom_interface__msg__PerceptionInputs),
  my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_message_member_array,  // message members
  my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_init_function,  // function to initialize message memory (memory has to be allocated)
  my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_message_type_support_handle = {
  0,
  &my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_interface, msg, PerceptionInputs)() {
  if (!my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_message_type_support_handle.typesupport_identifier) {
    my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_custom_interface__msg__PerceptionInputs__rosidl_typesupport_introspection_c__PerceptionInputs_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
