// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "broodje_interfaces/msg/name_number.hpp"


#ifndef BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__TRAITS_HPP_
#define BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "broodje_interfaces/msg/detail/name_number__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace broodje_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NameNumber & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NameNumber & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NameNumber & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace broodje_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use broodje_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const broodje_interfaces::msg::NameNumber & msg,
  std::ostream & out, size_t indentation = 0)
{
  broodje_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use broodje_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const broodje_interfaces::msg::NameNumber & msg)
{
  return broodje_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<broodje_interfaces::msg::NameNumber>()
{
  return "broodje_interfaces::msg::NameNumber";
}

template<>
inline const char * name<broodje_interfaces::msg::NameNumber>()
{
  return "broodje_interfaces/msg/NameNumber";
}

template<>
struct has_fixed_size<broodje_interfaces::msg::NameNumber>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<broodje_interfaces::msg::NameNumber>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<broodje_interfaces::msg::NameNumber>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__TRAITS_HPP_
