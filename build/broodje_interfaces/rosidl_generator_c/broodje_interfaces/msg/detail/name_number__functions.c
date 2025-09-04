// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice
#include "broodje_interfaces/msg/detail/name_number__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
broodje_interfaces__msg__NameNumber__init(broodje_interfaces__msg__NameNumber * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    broodje_interfaces__msg__NameNumber__fini(msg);
    return false;
  }
  // number
  return true;
}

void
broodje_interfaces__msg__NameNumber__fini(broodje_interfaces__msg__NameNumber * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // number
}

bool
broodje_interfaces__msg__NameNumber__are_equal(const broodje_interfaces__msg__NameNumber * lhs, const broodje_interfaces__msg__NameNumber * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
broodje_interfaces__msg__NameNumber__copy(
  const broodje_interfaces__msg__NameNumber * input,
  broodje_interfaces__msg__NameNumber * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

broodje_interfaces__msg__NameNumber *
broodje_interfaces__msg__NameNumber__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  broodje_interfaces__msg__NameNumber * msg = (broodje_interfaces__msg__NameNumber *)allocator.allocate(sizeof(broodje_interfaces__msg__NameNumber), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(broodje_interfaces__msg__NameNumber));
  bool success = broodje_interfaces__msg__NameNumber__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
broodje_interfaces__msg__NameNumber__destroy(broodje_interfaces__msg__NameNumber * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    broodje_interfaces__msg__NameNumber__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
broodje_interfaces__msg__NameNumber__Sequence__init(broodje_interfaces__msg__NameNumber__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  broodje_interfaces__msg__NameNumber * data = NULL;

  if (size) {
    data = (broodje_interfaces__msg__NameNumber *)allocator.zero_allocate(size, sizeof(broodje_interfaces__msg__NameNumber), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = broodje_interfaces__msg__NameNumber__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        broodje_interfaces__msg__NameNumber__fini(&data[i - 1]);
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
broodje_interfaces__msg__NameNumber__Sequence__fini(broodje_interfaces__msg__NameNumber__Sequence * array)
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
      broodje_interfaces__msg__NameNumber__fini(&array->data[i]);
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

broodje_interfaces__msg__NameNumber__Sequence *
broodje_interfaces__msg__NameNumber__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  broodje_interfaces__msg__NameNumber__Sequence * array = (broodje_interfaces__msg__NameNumber__Sequence *)allocator.allocate(sizeof(broodje_interfaces__msg__NameNumber__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = broodje_interfaces__msg__NameNumber__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
broodje_interfaces__msg__NameNumber__Sequence__destroy(broodje_interfaces__msg__NameNumber__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    broodje_interfaces__msg__NameNumber__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
broodje_interfaces__msg__NameNumber__Sequence__are_equal(const broodje_interfaces__msg__NameNumber__Sequence * lhs, const broodje_interfaces__msg__NameNumber__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!broodje_interfaces__msg__NameNumber__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
broodje_interfaces__msg__NameNumber__Sequence__copy(
  const broodje_interfaces__msg__NameNumber__Sequence * input,
  broodje_interfaces__msg__NameNumber__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(broodje_interfaces__msg__NameNumber);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    broodje_interfaces__msg__NameNumber * data =
      (broodje_interfaces__msg__NameNumber *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!broodje_interfaces__msg__NameNumber__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          broodje_interfaces__msg__NameNumber__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!broodje_interfaces__msg__NameNumber__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
