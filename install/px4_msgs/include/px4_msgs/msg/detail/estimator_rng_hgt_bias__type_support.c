// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/EstimatorRngHgtBias.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/estimator_rng_hgt_bias__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/estimator_rng_hgt_bias__functions.h"
#include "px4_msgs/msg/detail/estimator_rng_hgt_bias__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__EstimatorRngHgtBias__init(message_memory);
}

void EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_fini_function(void * message_memory)
{
  px4_msgs__msg__EstimatorRngHgtBias__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorRngHgtBias, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorRngHgtBias, timestamp_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baro_device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorRngHgtBias, baro_device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorRngHgtBias, bias),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorRngHgtBias, bias_var),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "innov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorRngHgtBias, innov),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "innov_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorRngHgtBias, innov_var),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "innov_test_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorRngHgtBias, innov_test_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_message_members = {
  "px4_msgs__msg",  // message namespace
  "EstimatorRngHgtBias",  // message name
  8,  // number of fields
  sizeof(px4_msgs__msg__EstimatorRngHgtBias),
  EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_message_member_array,  // message members
  EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_init_function,  // function to initialize message memory (memory has to be allocated)
  EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_message_type_support_handle = {
  0,
  &EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, EstimatorRngHgtBias)() {
  if (!EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_message_type_support_handle.typesupport_identifier) {
    EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EstimatorRngHgtBias__rosidl_typesupport_introspection_c__EstimatorRngHgtBias_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
