// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "broodje_interfaces/msg/detail/name_number__rosidl_typesupport_introspection_c.h"
#include "broodje_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "broodje_interfaces/msg/detail/name_number__functions.h"
#include "broodje_interfaces/msg/detail/name_number__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  broodje_interfaces__msg__NameNumber__init(message_memory);
}

void broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_fini_function(void * message_memory)
{
  broodje_interfaces__msg__NameNumber__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(broodje_interfaces__msg__NameNumber, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(broodje_interfaces__msg__NameNumber, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_message_members = {
  "broodje_interfaces__msg",  // message namespace
  "NameNumber",  // message name
  2,  // number of fields
  sizeof(broodje_interfaces__msg__NameNumber),
  false,  // has_any_key_member_
  broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_message_member_array,  // message members
  broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_init_function,  // function to initialize message memory (memory has to be allocated)
  broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_message_type_support_handle = {
  0,
  &broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_message_members,
  get_message_typesupport_handle_function,
  &broodje_interfaces__msg__NameNumber__get_type_hash,
  &broodje_interfaces__msg__NameNumber__get_type_description,
  &broodje_interfaces__msg__NameNumber__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_broodje_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, broodje_interfaces, msg, NameNumber)() {
  if (!broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_message_type_support_handle.typesupport_identifier) {
    broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &broodje_interfaces__msg__NameNumber__rosidl_typesupport_introspection_c__NameNumber_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
