// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "broodje_interfaces/msg/name_number.h"


#ifndef BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__FUNCTIONS_H_
#define BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "broodje_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "broodje_interfaces/msg/detail/name_number__struct.h"

/// Initialize msg/NameNumber message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * broodje_interfaces__msg__NameNumber
 * )) before or use
 * broodje_interfaces__msg__NameNumber__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
bool
broodje_interfaces__msg__NameNumber__init(broodje_interfaces__msg__NameNumber * msg);

/// Finalize msg/NameNumber message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
void
broodje_interfaces__msg__NameNumber__fini(broodje_interfaces__msg__NameNumber * msg);

/// Create msg/NameNumber message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * broodje_interfaces__msg__NameNumber__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
broodje_interfaces__msg__NameNumber *
broodje_interfaces__msg__NameNumber__create(void);

/// Destroy msg/NameNumber message.
/**
 * It calls
 * broodje_interfaces__msg__NameNumber__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
void
broodje_interfaces__msg__NameNumber__destroy(broodje_interfaces__msg__NameNumber * msg);

/// Check for msg/NameNumber message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
bool
broodje_interfaces__msg__NameNumber__are_equal(const broodje_interfaces__msg__NameNumber * lhs, const broodje_interfaces__msg__NameNumber * rhs);

/// Copy a msg/NameNumber message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
bool
broodje_interfaces__msg__NameNumber__copy(
  const broodje_interfaces__msg__NameNumber * input,
  broodje_interfaces__msg__NameNumber * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
const rosidl_type_hash_t *
broodje_interfaces__msg__NameNumber__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
broodje_interfaces__msg__NameNumber__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
const rosidl_runtime_c__type_description__TypeSource *
broodje_interfaces__msg__NameNumber__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
broodje_interfaces__msg__NameNumber__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/NameNumber messages.
/**
 * It allocates the memory for the number of elements and calls
 * broodje_interfaces__msg__NameNumber__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
bool
broodje_interfaces__msg__NameNumber__Sequence__init(broodje_interfaces__msg__NameNumber__Sequence * array, size_t size);

/// Finalize array of msg/NameNumber messages.
/**
 * It calls
 * broodje_interfaces__msg__NameNumber__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
void
broodje_interfaces__msg__NameNumber__Sequence__fini(broodje_interfaces__msg__NameNumber__Sequence * array);

/// Create array of msg/NameNumber messages.
/**
 * It allocates the memory for the array and calls
 * broodje_interfaces__msg__NameNumber__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
broodje_interfaces__msg__NameNumber__Sequence *
broodje_interfaces__msg__NameNumber__Sequence__create(size_t size);

/// Destroy array of msg/NameNumber messages.
/**
 * It calls
 * broodje_interfaces__msg__NameNumber__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
void
broodje_interfaces__msg__NameNumber__Sequence__destroy(broodje_interfaces__msg__NameNumber__Sequence * array);

/// Check for msg/NameNumber message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
bool
broodje_interfaces__msg__NameNumber__Sequence__are_equal(const broodje_interfaces__msg__NameNumber__Sequence * lhs, const broodje_interfaces__msg__NameNumber__Sequence * rhs);

/// Copy an array of msg/NameNumber messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
bool
broodje_interfaces__msg__NameNumber__Sequence__copy(
  const broodje_interfaces__msg__NameNumber__Sequence * input,
  broodje_interfaces__msg__NameNumber__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__FUNCTIONS_H_
