// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vehicle_status_flags__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::VehicleStatusFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: mode_req_angular_velocity
  cdr << ros_message.mode_req_angular_velocity;
  // Member: mode_req_attitude
  cdr << ros_message.mode_req_attitude;
  // Member: mode_req_local_position
  cdr << ros_message.mode_req_local_position;
  // Member: mode_req_local_position_relaxed
  cdr << ros_message.mode_req_local_position_relaxed;
  // Member: mode_req_global_position
  cdr << ros_message.mode_req_global_position;
  // Member: mode_req_local_alt
  cdr << ros_message.mode_req_local_alt;
  // Member: mode_req_mission
  cdr << ros_message.mode_req_mission;
  // Member: mode_req_offboard_signal
  cdr << ros_message.mode_req_offboard_signal;
  // Member: mode_req_home_position
  cdr << ros_message.mode_req_home_position;
  // Member: mode_req_prevent_arming
  cdr << ros_message.mode_req_prevent_arming;
  // Member: mode_req_other
  cdr << ros_message.mode_req_other;
  // Member: calibration_enabled
  cdr << (ros_message.calibration_enabled ? true : false);
  // Member: pre_flight_checks_pass
  cdr << (ros_message.pre_flight_checks_pass ? true : false);
  // Member: auto_mission_available
  cdr << (ros_message.auto_mission_available ? true : false);
  // Member: angular_velocity_valid
  cdr << (ros_message.angular_velocity_valid ? true : false);
  // Member: attitude_valid
  cdr << (ros_message.attitude_valid ? true : false);
  // Member: local_altitude_valid
  cdr << (ros_message.local_altitude_valid ? true : false);
  // Member: local_position_valid
  cdr << (ros_message.local_position_valid ? true : false);
  // Member: local_position_valid_relaxed
  cdr << (ros_message.local_position_valid_relaxed ? true : false);
  // Member: local_velocity_valid
  cdr << (ros_message.local_velocity_valid ? true : false);
  // Member: global_position_valid
  cdr << (ros_message.global_position_valid ? true : false);
  // Member: gps_position_valid
  cdr << (ros_message.gps_position_valid ? true : false);
  // Member: home_position_valid
  cdr << (ros_message.home_position_valid ? true : false);
  // Member: offboard_control_signal_lost
  cdr << (ros_message.offboard_control_signal_lost ? true : false);
  // Member: rc_signal_found_once
  cdr << (ros_message.rc_signal_found_once ? true : false);
  // Member: rc_calibration_in_progress
  cdr << (ros_message.rc_calibration_in_progress ? true : false);
  // Member: vtol_transition_failure
  cdr << (ros_message.vtol_transition_failure ? true : false);
  // Member: battery_low_remaining_time
  cdr << (ros_message.battery_low_remaining_time ? true : false);
  // Member: battery_unhealthy
  cdr << (ros_message.battery_unhealthy ? true : false);
  // Member: battery_warning
  cdr << ros_message.battery_warning;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleStatusFlags & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: mode_req_angular_velocity
  cdr >> ros_message.mode_req_angular_velocity;

  // Member: mode_req_attitude
  cdr >> ros_message.mode_req_attitude;

  // Member: mode_req_local_position
  cdr >> ros_message.mode_req_local_position;

  // Member: mode_req_local_position_relaxed
  cdr >> ros_message.mode_req_local_position_relaxed;

  // Member: mode_req_global_position
  cdr >> ros_message.mode_req_global_position;

  // Member: mode_req_local_alt
  cdr >> ros_message.mode_req_local_alt;

  // Member: mode_req_mission
  cdr >> ros_message.mode_req_mission;

  // Member: mode_req_offboard_signal
  cdr >> ros_message.mode_req_offboard_signal;

  // Member: mode_req_home_position
  cdr >> ros_message.mode_req_home_position;

  // Member: mode_req_prevent_arming
  cdr >> ros_message.mode_req_prevent_arming;

  // Member: mode_req_other
  cdr >> ros_message.mode_req_other;

  // Member: calibration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.calibration_enabled = tmp ? true : false;
  }

  // Member: pre_flight_checks_pass
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pre_flight_checks_pass = tmp ? true : false;
  }

  // Member: auto_mission_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.auto_mission_available = tmp ? true : false;
  }

  // Member: angular_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.angular_velocity_valid = tmp ? true : false;
  }

  // Member: attitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.attitude_valid = tmp ? true : false;
  }

  // Member: local_altitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_altitude_valid = tmp ? true : false;
  }

  // Member: local_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_position_valid = tmp ? true : false;
  }

  // Member: local_position_valid_relaxed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_position_valid_relaxed = tmp ? true : false;
  }

  // Member: local_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_velocity_valid = tmp ? true : false;
  }

  // Member: global_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.global_position_valid = tmp ? true : false;
  }

  // Member: gps_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_position_valid = tmp ? true : false;
  }

  // Member: home_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.home_position_valid = tmp ? true : false;
  }

  // Member: offboard_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.offboard_control_signal_lost = tmp ? true : false;
  }

  // Member: rc_signal_found_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_signal_found_once = tmp ? true : false;
  }

  // Member: rc_calibration_in_progress
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_calibration_in_progress = tmp ? true : false;
  }

  // Member: vtol_transition_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vtol_transition_failure = tmp ? true : false;
  }

  // Member: battery_low_remaining_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.battery_low_remaining_time = tmp ? true : false;
  }

  // Member: battery_unhealthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.battery_unhealthy = tmp ? true : false;
  }

  // Member: battery_warning
  cdr >> ros_message.battery_warning;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleStatusFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_angular_velocity
  {
    size_t item_size = sizeof(ros_message.mode_req_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_attitude
  {
    size_t item_size = sizeof(ros_message.mode_req_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_position
  {
    size_t item_size = sizeof(ros_message.mode_req_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_position_relaxed
  {
    size_t item_size = sizeof(ros_message.mode_req_local_position_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_global_position
  {
    size_t item_size = sizeof(ros_message.mode_req_global_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_alt
  {
    size_t item_size = sizeof(ros_message.mode_req_local_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_mission
  {
    size_t item_size = sizeof(ros_message.mode_req_mission);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_offboard_signal
  {
    size_t item_size = sizeof(ros_message.mode_req_offboard_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_home_position
  {
    size_t item_size = sizeof(ros_message.mode_req_home_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_prevent_arming
  {
    size_t item_size = sizeof(ros_message.mode_req_prevent_arming);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_other
  {
    size_t item_size = sizeof(ros_message.mode_req_other);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: calibration_enabled
  {
    size_t item_size = sizeof(ros_message.calibration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_flight_checks_pass
  {
    size_t item_size = sizeof(ros_message.pre_flight_checks_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_mission_available
  {
    size_t item_size = sizeof(ros_message.auto_mission_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_velocity_valid
  {
    size_t item_size = sizeof(ros_message.angular_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attitude_valid
  {
    size_t item_size = sizeof(ros_message.attitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_altitude_valid
  {
    size_t item_size = sizeof(ros_message.local_altitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_position_valid
  {
    size_t item_size = sizeof(ros_message.local_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_position_valid_relaxed
  {
    size_t item_size = sizeof(ros_message.local_position_valid_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_velocity_valid
  {
    size_t item_size = sizeof(ros_message.local_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: global_position_valid
  {
    size_t item_size = sizeof(ros_message.global_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_position_valid
  {
    size_t item_size = sizeof(ros_message.gps_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: home_position_valid
  {
    size_t item_size = sizeof(ros_message.home_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offboard_control_signal_lost
  {
    size_t item_size = sizeof(ros_message.offboard_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_signal_found_once
  {
    size_t item_size = sizeof(ros_message.rc_signal_found_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_calibration_in_progress
  {
    size_t item_size = sizeof(ros_message.rc_calibration_in_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vtol_transition_failure
  {
    size_t item_size = sizeof(ros_message.vtol_transition_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_low_remaining_time
  {
    size_t item_size = sizeof(ros_message.battery_low_remaining_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_unhealthy
  {
    size_t item_size = sizeof(ros_message.battery_unhealthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_warning
  {
    size_t item_size = sizeof(ros_message.battery_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleStatusFlags(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mode_req_angular_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_attitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_local_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_local_position_relaxed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_global_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_local_alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_mission
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_offboard_signal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_home_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_prevent_arming
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_other
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: calibration_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pre_flight_checks_pass
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_mission_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: angular_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_altitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_position_valid_relaxed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: global_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: home_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: offboard_control_signal_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_signal_found_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_calibration_in_progress
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vtol_transition_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_low_remaining_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_unhealthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStatusFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStatusFlags__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleStatusFlags(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleStatusFlags__callbacks = {
  "px4_msgs::msg",
  "VehicleStatusFlags",
  _VehicleStatusFlags__cdr_serialize,
  _VehicleStatusFlags__cdr_deserialize,
  _VehicleStatusFlags__get_serialized_size,
  _VehicleStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatusFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStatusFlags__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::VehicleStatusFlags>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatusFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleStatusFlags)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatusFlags__handle;
}

#ifdef __cplusplus
}
#endif
