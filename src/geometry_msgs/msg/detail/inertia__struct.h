// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__Inertia__TYPE_HASH = {1, {
    0x2d, 0xdd, 0x5d, 0xab, 0x5c, 0x34, 0x78, 0x25,
    0xba, 0x2e, 0x56, 0xc8, 0x95, 0xdd, 0xcc, 0xfd,
    0x0b, 0x8e, 0xfe, 0x53, 0xae, 0x93, 0x1b, 0xf6,
    0x7f, 0x90, 0x55, 0x29, 0x93, 0x0b, 0x4b, 0xd7,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Inertia in the package geometry_msgs.
/**
  * Mass
 */
typedef struct geometry_msgs__msg__Inertia
{
  double m;
  /// Center of mass
  geometry_msgs__msg__Vector3 com;
  /// Inertia Tensor
  ///     | ixx ixy ixz |
  /// I = | ixy iyy iyz |
  ///     | ixz iyz izz |
  double ixx;
  double ixy;
  double ixz;
  double iyy;
  double iyz;
  double izz;
} geometry_msgs__msg__Inertia;

// Struct for a sequence of geometry_msgs__msg__Inertia.
typedef struct geometry_msgs__msg__Inertia__Sequence
{
  geometry_msgs__msg__Inertia * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Inertia__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_H_
