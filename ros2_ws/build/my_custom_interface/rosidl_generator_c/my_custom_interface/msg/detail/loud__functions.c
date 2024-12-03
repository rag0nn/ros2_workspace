// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_custom_interface:msg/Loud.idl
// generated code does not contain a copyright notice
#include "my_custom_interface/msg/detail/loud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
my_custom_interface__msg__Loud__init(my_custom_interface__msg__Loud * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->data, 0)) {
    my_custom_interface__msg__Loud__fini(msg);
    return false;
  }
  // width
  // height
  // channel
  return true;
}

void
my_custom_interface__msg__Loud__fini(my_custom_interface__msg__Loud * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__int16__Sequence__fini(&msg->data);
  // width
  // height
  // channel
}

bool
my_custom_interface__msg__Loud__are_equal(const my_custom_interface__msg__Loud * lhs, const my_custom_interface__msg__Loud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // channel
  if (lhs->channel != rhs->channel) {
    return false;
  }
  return true;
}

bool
my_custom_interface__msg__Loud__copy(
  const my_custom_interface__msg__Loud * input,
  my_custom_interface__msg__Loud * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // channel
  output->channel = input->channel;
  return true;
}

my_custom_interface__msg__Loud *
my_custom_interface__msg__Loud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__msg__Loud * msg = (my_custom_interface__msg__Loud *)allocator.allocate(sizeof(my_custom_interface__msg__Loud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_interface__msg__Loud));
  bool success = my_custom_interface__msg__Loud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_interface__msg__Loud__destroy(my_custom_interface__msg__Loud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_interface__msg__Loud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_interface__msg__Loud__Sequence__init(my_custom_interface__msg__Loud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__msg__Loud * data = NULL;

  if (size) {
    data = (my_custom_interface__msg__Loud *)allocator.zero_allocate(size, sizeof(my_custom_interface__msg__Loud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_interface__msg__Loud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_interface__msg__Loud__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_custom_interface__msg__Loud__Sequence__fini(my_custom_interface__msg__Loud__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_custom_interface__msg__Loud__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_custom_interface__msg__Loud__Sequence *
my_custom_interface__msg__Loud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__msg__Loud__Sequence * array = (my_custom_interface__msg__Loud__Sequence *)allocator.allocate(sizeof(my_custom_interface__msg__Loud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_interface__msg__Loud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_interface__msg__Loud__Sequence__destroy(my_custom_interface__msg__Loud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_interface__msg__Loud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_interface__msg__Loud__Sequence__are_equal(const my_custom_interface__msg__Loud__Sequence * lhs, const my_custom_interface__msg__Loud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_interface__msg__Loud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_interface__msg__Loud__Sequence__copy(
  const my_custom_interface__msg__Loud__Sequence * input,
  my_custom_interface__msg__Loud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_interface__msg__Loud);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_interface__msg__Loud * data =
      (my_custom_interface__msg__Loud *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_interface__msg__Loud__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_interface__msg__Loud__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_interface__msg__Loud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
