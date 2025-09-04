// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice

#include "broodje_interfaces/msg/detail/name_number__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_broodje_interfaces
const rosidl_type_hash_t *
broodje_interfaces__msg__NameNumber__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0x0b, 0x82, 0x38, 0x3a, 0x51, 0xaf, 0xbc,
      0x2b, 0x09, 0x7e, 0xae, 0xe3, 0x78, 0xa9, 0x99,
      0x6e, 0x93, 0x78, 0x48, 0xec, 0x4a, 0x1e, 0x08,
      0x4a, 0x3b, 0x89, 0x97, 0x27, 0xd6, 0x75, 0xc2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char broodje_interfaces__msg__NameNumber__TYPE_NAME[] = "broodje_interfaces/msg/NameNumber";

// Define type names, field names, and default values
static char broodje_interfaces__msg__NameNumber__FIELD_NAME__name[] = "name";
static char broodje_interfaces__msg__NameNumber__FIELD_NAME__number[] = "number";

static rosidl_runtime_c__type_description__Field broodje_interfaces__msg__NameNumber__FIELDS[] = {
  {
    {broodje_interfaces__msg__NameNumber__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {broodje_interfaces__msg__NameNumber__FIELD_NAME__number, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
broodje_interfaces__msg__NameNumber__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {broodje_interfaces__msg__NameNumber__TYPE_NAME, 33, 33},
      {broodje_interfaces__msg__NameNumber__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int32 number";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
broodje_interfaces__msg__NameNumber__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {broodje_interfaces__msg__NameNumber__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
broodje_interfaces__msg__NameNumber__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *broodje_interfaces__msg__NameNumber__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
