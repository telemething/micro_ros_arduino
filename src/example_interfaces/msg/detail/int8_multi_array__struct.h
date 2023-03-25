// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Int8MultiArray__TYPE_HASH = {1, {
    0x6d, 0x26, 0x93, 0x2a, 0xef, 0xc0, 0xe5, 0xc0,
    0xc4, 0x73, 0x61, 0x33, 0x76, 0x33, 0x86, 0x09,
    0xba, 0xc9, 0x92, 0x5e, 0x35, 0x27, 0xdc, 0x4e,
    0x8f, 0xab, 0x6b, 0x67, 0x83, 0xb6, 0xd6, 0x80,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int8MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Int8MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int8__Sequence data;
} example_interfaces__msg__Int8MultiArray;

// Struct for a sequence of example_interfaces__msg__Int8MultiArray.
typedef struct example_interfaces__msg__Int8MultiArray__Sequence
{
  example_interfaces__msg__Int8MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int8MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_
