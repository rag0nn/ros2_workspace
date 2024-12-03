// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interface:msg/PerceptionInputs.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__STRUCT_H_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'inputs'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'activation'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PerceptionInputs in the package my_custom_interface.
typedef struct my_custom_interface__msg__PerceptionInputs
{
  rosidl_runtime_c__double__Sequence inputs;
  rosidl_runtime_c__String activation;
} my_custom_interface__msg__PerceptionInputs;

// Struct for a sequence of my_custom_interface__msg__PerceptionInputs.
typedef struct my_custom_interface__msg__PerceptionInputs__Sequence
{
  my_custom_interface__msg__PerceptionInputs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__msg__PerceptionInputs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__STRUCT_H_
