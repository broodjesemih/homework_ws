// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "broodje_interfaces/msg/name_number.h"


#ifndef BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__STRUCT_H_
#define BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NameNumber in the package broodje_interfaces.
typedef struct broodje_interfaces__msg__NameNumber
{
  rosidl_runtime_c__String name;
  int32_t number;
} broodje_interfaces__msg__NameNumber;

// Struct for a sequence of broodje_interfaces__msg__NameNumber.
typedef struct broodje_interfaces__msg__NameNumber__Sequence
{
  broodje_interfaces__msg__NameNumber * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} broodje_interfaces__msg__NameNumber__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__STRUCT_H_
