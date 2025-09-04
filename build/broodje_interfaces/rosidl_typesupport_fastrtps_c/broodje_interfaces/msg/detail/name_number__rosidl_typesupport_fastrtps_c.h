// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice
#ifndef BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "broodje_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "broodje_interfaces/msg/detail/name_number__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
bool cdr_serialize_broodje_interfaces__msg__NameNumber(
  const broodje_interfaces__msg__NameNumber * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
bool cdr_deserialize_broodje_interfaces__msg__NameNumber(
  eprosima::fastcdr::Cdr &,
  broodje_interfaces__msg__NameNumber * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
size_t get_serialized_size_broodje_interfaces__msg__NameNumber(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
size_t max_serialized_size_broodje_interfaces__msg__NameNumber(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
bool cdr_serialize_key_broodje_interfaces__msg__NameNumber(
  const broodje_interfaces__msg__NameNumber * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
size_t get_serialized_size_key_broodje_interfaces__msg__NameNumber(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
size_t max_serialized_size_key_broodje_interfaces__msg__NameNumber(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_broodje_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, broodje_interfaces, msg, NameNumber)();

#ifdef __cplusplus
}
#endif

#endif  // BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
