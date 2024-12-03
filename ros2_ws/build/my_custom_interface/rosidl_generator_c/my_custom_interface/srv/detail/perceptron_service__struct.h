// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interface:srv/PerceptronService.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__STRUCT_H_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__STRUCT_H_

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

/// Struct defined in srv/PerceptronService in the package my_custom_interface.
typedef struct my_custom_interface__srv__PerceptronService_Request
{
  rosidl_runtime_c__double__Sequence inputs;
  rosidl_runtime_c__String activation;
} my_custom_interface__srv__PerceptronService_Request;

// Struct for a sequence of my_custom_interface__srv__PerceptronService_Request.
typedef struct my_custom_interface__srv__PerceptronService_Request__Sequence
{
  my_custom_interface__srv__PerceptronService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__PerceptronService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PerceptronService in the package my_custom_interface.
typedef struct my_custom_interface__srv__PerceptronService_Response
{
  double result;
} my_custom_interface__srv__PerceptronService_Response;

// Struct for a sequence of my_custom_interface__srv__PerceptronService_Response.
typedef struct my_custom_interface__srv__PerceptronService_Response__Sequence
{
  my_custom_interface__srv__PerceptronService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interface__srv__PerceptronService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__STRUCT_H_
