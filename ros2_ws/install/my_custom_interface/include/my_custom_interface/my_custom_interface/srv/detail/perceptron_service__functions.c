// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_custom_interface:srv/PerceptronService.idl
// generated code does not contain a copyright notice
#include "my_custom_interface/srv/detail/perceptron_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `inputs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `activation`
#include "rosidl_runtime_c/string_functions.h"

bool
my_custom_interface__srv__PerceptronService_Request__init(my_custom_interface__srv__PerceptronService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // inputs
  if (!rosidl_runtime_c__double__Sequence__init(&msg->inputs, 0)) {
    my_custom_interface__srv__PerceptronService_Request__fini(msg);
    return false;
  }
  // activation
  if (!rosidl_runtime_c__String__init(&msg->activation)) {
    my_custom_interface__srv__PerceptronService_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_custom_interface__srv__PerceptronService_Request__fini(my_custom_interface__srv__PerceptronService_Request * msg)
{
  if (!msg) {
    return;
  }
  // inputs
  rosidl_runtime_c__double__Sequence__fini(&msg->inputs);
  // activation
  rosidl_runtime_c__String__fini(&msg->activation);
}

bool
my_custom_interface__srv__PerceptronService_Request__are_equal(const my_custom_interface__srv__PerceptronService_Request * lhs, const my_custom_interface__srv__PerceptronService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // inputs
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->inputs), &(rhs->inputs)))
  {
    return false;
  }
  // activation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->activation), &(rhs->activation)))
  {
    return false;
  }
  return true;
}

bool
my_custom_interface__srv__PerceptronService_Request__copy(
  const my_custom_interface__srv__PerceptronService_Request * input,
  my_custom_interface__srv__PerceptronService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // inputs
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->inputs), &(output->inputs)))
  {
    return false;
  }
  // activation
  if (!rosidl_runtime_c__String__copy(
      &(input->activation), &(output->activation)))
  {
    return false;
  }
  return true;
}

my_custom_interface__srv__PerceptronService_Request *
my_custom_interface__srv__PerceptronService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__PerceptronService_Request * msg = (my_custom_interface__srv__PerceptronService_Request *)allocator.allocate(sizeof(my_custom_interface__srv__PerceptronService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_interface__srv__PerceptronService_Request));
  bool success = my_custom_interface__srv__PerceptronService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_interface__srv__PerceptronService_Request__destroy(my_custom_interface__srv__PerceptronService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_interface__srv__PerceptronService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_interface__srv__PerceptronService_Request__Sequence__init(my_custom_interface__srv__PerceptronService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__PerceptronService_Request * data = NULL;

  if (size) {
    data = (my_custom_interface__srv__PerceptronService_Request *)allocator.zero_allocate(size, sizeof(my_custom_interface__srv__PerceptronService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_interface__srv__PerceptronService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_interface__srv__PerceptronService_Request__fini(&data[i - 1]);
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
my_custom_interface__srv__PerceptronService_Request__Sequence__fini(my_custom_interface__srv__PerceptronService_Request__Sequence * array)
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
      my_custom_interface__srv__PerceptronService_Request__fini(&array->data[i]);
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

my_custom_interface__srv__PerceptronService_Request__Sequence *
my_custom_interface__srv__PerceptronService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__PerceptronService_Request__Sequence * array = (my_custom_interface__srv__PerceptronService_Request__Sequence *)allocator.allocate(sizeof(my_custom_interface__srv__PerceptronService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_interface__srv__PerceptronService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_interface__srv__PerceptronService_Request__Sequence__destroy(my_custom_interface__srv__PerceptronService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_interface__srv__PerceptronService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_interface__srv__PerceptronService_Request__Sequence__are_equal(const my_custom_interface__srv__PerceptronService_Request__Sequence * lhs, const my_custom_interface__srv__PerceptronService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_interface__srv__PerceptronService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_interface__srv__PerceptronService_Request__Sequence__copy(
  const my_custom_interface__srv__PerceptronService_Request__Sequence * input,
  my_custom_interface__srv__PerceptronService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_interface__srv__PerceptronService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_interface__srv__PerceptronService_Request * data =
      (my_custom_interface__srv__PerceptronService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_interface__srv__PerceptronService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_interface__srv__PerceptronService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_interface__srv__PerceptronService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
my_custom_interface__srv__PerceptronService_Response__init(my_custom_interface__srv__PerceptronService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
my_custom_interface__srv__PerceptronService_Response__fini(my_custom_interface__srv__PerceptronService_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
my_custom_interface__srv__PerceptronService_Response__are_equal(const my_custom_interface__srv__PerceptronService_Response * lhs, const my_custom_interface__srv__PerceptronService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
my_custom_interface__srv__PerceptronService_Response__copy(
  const my_custom_interface__srv__PerceptronService_Response * input,
  my_custom_interface__srv__PerceptronService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

my_custom_interface__srv__PerceptronService_Response *
my_custom_interface__srv__PerceptronService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__PerceptronService_Response * msg = (my_custom_interface__srv__PerceptronService_Response *)allocator.allocate(sizeof(my_custom_interface__srv__PerceptronService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_interface__srv__PerceptronService_Response));
  bool success = my_custom_interface__srv__PerceptronService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_interface__srv__PerceptronService_Response__destroy(my_custom_interface__srv__PerceptronService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_interface__srv__PerceptronService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_interface__srv__PerceptronService_Response__Sequence__init(my_custom_interface__srv__PerceptronService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__PerceptronService_Response * data = NULL;

  if (size) {
    data = (my_custom_interface__srv__PerceptronService_Response *)allocator.zero_allocate(size, sizeof(my_custom_interface__srv__PerceptronService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_interface__srv__PerceptronService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_interface__srv__PerceptronService_Response__fini(&data[i - 1]);
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
my_custom_interface__srv__PerceptronService_Response__Sequence__fini(my_custom_interface__srv__PerceptronService_Response__Sequence * array)
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
      my_custom_interface__srv__PerceptronService_Response__fini(&array->data[i]);
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

my_custom_interface__srv__PerceptronService_Response__Sequence *
my_custom_interface__srv__PerceptronService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interface__srv__PerceptronService_Response__Sequence * array = (my_custom_interface__srv__PerceptronService_Response__Sequence *)allocator.allocate(sizeof(my_custom_interface__srv__PerceptronService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_interface__srv__PerceptronService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_interface__srv__PerceptronService_Response__Sequence__destroy(my_custom_interface__srv__PerceptronService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_interface__srv__PerceptronService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_interface__srv__PerceptronService_Response__Sequence__are_equal(const my_custom_interface__srv__PerceptronService_Response__Sequence * lhs, const my_custom_interface__srv__PerceptronService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_interface__srv__PerceptronService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_interface__srv__PerceptronService_Response__Sequence__copy(
  const my_custom_interface__srv__PerceptronService_Response__Sequence * input,
  my_custom_interface__srv__PerceptronService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_interface__srv__PerceptronService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_interface__srv__PerceptronService_Response * data =
      (my_custom_interface__srv__PerceptronService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_interface__srv__PerceptronService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_interface__srv__PerceptronService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_interface__srv__PerceptronService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
