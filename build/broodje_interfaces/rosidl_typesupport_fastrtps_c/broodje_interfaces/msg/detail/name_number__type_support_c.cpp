// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice
#include "broodje_interfaces/msg/detail/name_number__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "broodje_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "broodje_interfaces/msg/detail/name_number__struct.h"
#include "broodje_interfaces/msg/detail/name_number__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _NameNumber__ros_msg_type = broodje_interfaces__msg__NameNumber;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
bool cdr_serialize_broodje_interfaces__msg__NameNumber(
  const broodje_interfaces__msg__NameNumber * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: number
  {
    cdr << ros_message->number;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
bool cdr_deserialize_broodje_interfaces__msg__NameNumber(
  eprosima::fastcdr::Cdr & cdr,
  broodje_interfaces__msg__NameNumber * ros_message)
{
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: number
  {
    cdr >> ros_message->number;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
size_t get_serialized_size_broodje_interfaces__msg__NameNumber(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NameNumber__ros_msg_type * ros_message = static_cast<const _NameNumber__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: number
  {
    size_t item_size = sizeof(ros_message->number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
size_t max_serialized_size_broodje_interfaces__msg__NameNumber(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = broodje_interfaces__msg__NameNumber;
    is_plain =
      (
      offsetof(DataType, number) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
bool cdr_serialize_key_broodje_interfaces__msg__NameNumber(
  const broodje_interfaces__msg__NameNumber * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: number
  {
    cdr << ros_message->number;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
size_t get_serialized_size_key_broodje_interfaces__msg__NameNumber(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NameNumber__ros_msg_type * ros_message = static_cast<const _NameNumber__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: number
  {
    size_t item_size = sizeof(ros_message->number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
size_t max_serialized_size_key_broodje_interfaces__msg__NameNumber(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = broodje_interfaces__msg__NameNumber;
    is_plain =
      (
      offsetof(DataType, number) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NameNumber__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const broodje_interfaces__msg__NameNumber * ros_message = static_cast<const broodje_interfaces__msg__NameNumber *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_broodje_interfaces__msg__NameNumber(ros_message, cdr);
}

static bool _NameNumber__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  broodje_interfaces__msg__NameNumber * ros_message = static_cast<broodje_interfaces__msg__NameNumber *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_broodje_interfaces__msg__NameNumber(cdr, ros_message);
}

static uint32_t _NameNumber__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_broodje_interfaces__msg__NameNumber(
      untyped_ros_message, 0));
}

static size_t _NameNumber__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_broodje_interfaces__msg__NameNumber(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NameNumber = {
  "broodje_interfaces::msg",
  "NameNumber",
  _NameNumber__cdr_serialize,
  _NameNumber__cdr_deserialize,
  _NameNumber__get_serialized_size,
  _NameNumber__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NameNumber__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NameNumber,
  get_message_typesupport_handle_function,
  &broodje_interfaces__msg__NameNumber__get_type_hash,
  &broodje_interfaces__msg__NameNumber__get_type_description,
  &broodje_interfaces__msg__NameNumber__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, broodje_interfaces, msg, NameNumber)() {
  return &_NameNumber__type_support;
}

#if defined(__cplusplus)
}
#endif
