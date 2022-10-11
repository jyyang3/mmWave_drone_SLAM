// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleMocapOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSE_FRAME_UNKNOWN'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__POSE_FRAME_UNKNOWN = 0
};

/// Constant 'POSE_FRAME_NED'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__POSE_FRAME_NED = 1
};

/// Constant 'POSE_FRAME_FRD'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__POSE_FRAME_FRD = 2
};

/// Constant 'VELOCITY_FRAME_UNKNOWN'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__VELOCITY_FRAME_UNKNOWN = 0
};

/// Constant 'VELOCITY_FRAME_NED'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__VELOCITY_FRAME_NED = 1
};

/// Constant 'VELOCITY_FRAME_FRD'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__VELOCITY_FRAME_FRD = 2
};

/// Constant 'VELOCITY_FRAME_BODY_FRD'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__VELOCITY_FRAME_BODY_FRD = 3
};

// Struct defined in msg/VehicleMocapOdometry in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleMocapOdometry
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint8_t pose_frame;
  float position[3];
  float q[4];
  uint8_t velocity_frame;
  float velocity[3];
  float angular_velocity[3];
  float position_variance[3];
  float orientation_variance[3];
  float velocity_variance[3];
  uint8_t reset_counter;
  int8_t quality;
} px4_msgs__msg__VehicleMocapOdometry;

// Struct for a sequence of px4_msgs__msg__VehicleMocapOdometry.
typedef struct px4_msgs__msg__VehicleMocapOdometry__Sequence
{
  px4_msgs__msg__VehicleMocapOdometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleMocapOdometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__STRUCT_H_
