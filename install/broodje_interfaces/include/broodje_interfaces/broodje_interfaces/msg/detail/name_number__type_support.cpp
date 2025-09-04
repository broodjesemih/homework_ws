// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "broodje_interfaces/msg/detail/name_number__functions.h"
#include "broodje_interfaces/msg/detail/name_number__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace broodje_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NameNumber_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) broodje_interfaces::msg::NameNumber(_init);
}

void NameNumber_fini_function(void * message_memory)
{
  auto typed_message = static_cast<broodje_interfaces::msg::NameNumber *>(message_memory);
  typed_message->~NameNumber();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NameNumber_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(broodje_interfaces::msg::NameNumber, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(broodje_interfaces::msg::NameNumber, number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NameNumber_message_members = {
  "broodje_interfaces::msg",  // message namespace
  "NameNumber",  // message name
  2,  // number of fields
  sizeof(broodje_interfaces::msg::NameNumber),
  false,  // has_any_key_member_
  NameNumber_message_member_array,  // message members
  NameNumber_init_function,  // function to initialize message memory (memory has to be allocated)
  NameNumber_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NameNumber_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NameNumber_message_members,
  get_message_typesupport_handle_function,
  &broodje_interfaces__msg__NameNumber__get_type_hash,
  &broodje_interfaces__msg__NameNumber__get_type_description,
  &broodje_interfaces__msg__NameNumber__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace broodje_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<broodje_interfaces::msg::NameNumber>()
{
  return &::broodje_interfaces::msg::rosidl_typesupport_introspection_cpp::NameNumber_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, broodje_interfaces, msg, NameNumber)() {
  return &::broodje_interfaces::msg::rosidl_typesupport_introspection_cpp::NameNumber_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
