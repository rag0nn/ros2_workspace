// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interface:msg/Loud.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__STRUCT_H_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Loud in the package my_custom_interface.
typedef struct my_custom_interface__msg__Loud
{
  rosidl_runtime_c__int16__Sequence data;
  int16_t width;
  int16_t height;
  int16_t channel;
} my_custom_interface__msg__Loud;

// Struct for a sequence of my_custom_interface__msg__Loud.
typedef struct my_custom_interface__msg__Loud__Sequence
{
  my_custom_interface__msg__Loud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__msg__Loud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__STRUCT_H_
