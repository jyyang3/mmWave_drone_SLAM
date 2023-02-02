# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleStatusFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatusFlags(type):
    """Metaclass of message 'VehicleStatusFlags'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.VehicleStatusFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleStatusFlags(metaclass=Metaclass_VehicleStatusFlags):
    """Message class 'VehicleStatusFlags'."""

    __slots__ = [
        '_timestamp',
        '_mode_req_angular_velocity',
        '_mode_req_attitude',
        '_mode_req_local_position',
        '_mode_req_local_position_relaxed',
        '_mode_req_global_position',
        '_mode_req_local_alt',
        '_mode_req_mission',
        '_mode_req_offboard_signal',
        '_mode_req_home_position',
        '_mode_req_prevent_arming',
        '_mode_req_other',
        '_calibration_enabled',
        '_pre_flight_checks_pass',
        '_auto_mission_available',
        '_angular_velocity_valid',
        '_attitude_valid',
        '_local_altitude_valid',
        '_local_position_valid',
        '_local_position_valid_relaxed',
        '_local_velocity_valid',
        '_global_position_valid',
        '_gps_position_valid',
        '_home_position_valid',
        '_offboard_control_signal_lost',
        '_rc_signal_found_once',
        '_rc_calibration_in_progress',
        '_vtol_transition_failure',
        '_battery_low_remaining_time',
        '_battery_unhealthy',
        '_battery_warning',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'mode_req_angular_velocity': 'uint32',
        'mode_req_attitude': 'uint32',
        'mode_req_local_position': 'uint32',
        'mode_req_local_position_relaxed': 'uint32',
        'mode_req_global_position': 'uint32',
        'mode_req_local_alt': 'uint32',
        'mode_req_mission': 'uint32',
        'mode_req_offboard_signal': 'uint32',
        'mode_req_home_position': 'uint32',
        'mode_req_prevent_arming': 'uint32',
        'mode_req_other': 'uint32',
        'calibration_enabled': 'boolean',
        'pre_flight_checks_pass': 'boolean',
        'auto_mission_available': 'boolean',
        'angular_velocity_valid': 'boolean',
        'attitude_valid': 'boolean',
        'local_altitude_valid': 'boolean',
        'local_position_valid': 'boolean',
        'local_position_valid_relaxed': 'boolean',
        'local_velocity_valid': 'boolean',
        'global_position_valid': 'boolean',
        'gps_position_valid': 'boolean',
        'home_position_valid': 'boolean',
        'offboard_control_signal_lost': 'boolean',
        'rc_signal_found_once': 'boolean',
        'rc_calibration_in_progress': 'boolean',
        'vtol_transition_failure': 'boolean',
        'battery_low_remaining_time': 'boolean',
        'battery_unhealthy': 'boolean',
        'battery_warning': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.mode_req_angular_velocity = kwargs.get('mode_req_angular_velocity', int())
        self.mode_req_attitude = kwargs.get('mode_req_attitude', int())
        self.mode_req_local_position = kwargs.get('mode_req_local_position', int())
        self.mode_req_local_position_relaxed = kwargs.get('mode_req_local_position_relaxed', int())
        self.mode_req_global_position = kwargs.get('mode_req_global_position', int())
        self.mode_req_local_alt = kwargs.get('mode_req_local_alt', int())
        self.mode_req_mission = kwargs.get('mode_req_mission', int())
        self.mode_req_offboard_signal = kwargs.get('mode_req_offboard_signal', int())
        self.mode_req_home_position = kwargs.get('mode_req_home_position', int())
        self.mode_req_prevent_arming = kwargs.get('mode_req_prevent_arming', int())
        self.mode_req_other = kwargs.get('mode_req_other', int())
        self.calibration_enabled = kwargs.get('calibration_enabled', bool())
        self.pre_flight_checks_pass = kwargs.get('pre_flight_checks_pass', bool())
        self.auto_mission_available = kwargs.get('auto_mission_available', bool())
        self.angular_velocity_valid = kwargs.get('angular_velocity_valid', bool())
        self.attitude_valid = kwargs.get('attitude_valid', bool())
        self.local_altitude_valid = kwargs.get('local_altitude_valid', bool())
        self.local_position_valid = kwargs.get('local_position_valid', bool())
        self.local_position_valid_relaxed = kwargs.get('local_position_valid_relaxed', bool())
        self.local_velocity_valid = kwargs.get('local_velocity_valid', bool())
        self.global_position_valid = kwargs.get('global_position_valid', bool())
        self.gps_position_valid = kwargs.get('gps_position_valid', bool())
        self.home_position_valid = kwargs.get('home_position_valid', bool())
        self.offboard_control_signal_lost = kwargs.get('offboard_control_signal_lost', bool())
        self.rc_signal_found_once = kwargs.get('rc_signal_found_once', bool())
        self.rc_calibration_in_progress = kwargs.get('rc_calibration_in_progress', bool())
        self.vtol_transition_failure = kwargs.get('vtol_transition_failure', bool())
        self.battery_low_remaining_time = kwargs.get('battery_low_remaining_time', bool())
        self.battery_unhealthy = kwargs.get('battery_unhealthy', bool())
        self.battery_warning = kwargs.get('battery_warning', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.mode_req_angular_velocity != other.mode_req_angular_velocity:
            return False
        if self.mode_req_attitude != other.mode_req_attitude:
            return False
        if self.mode_req_local_position != other.mode_req_local_position:
            return False
        if self.mode_req_local_position_relaxed != other.mode_req_local_position_relaxed:
            return False
        if self.mode_req_global_position != other.mode_req_global_position:
            return False
        if self.mode_req_local_alt != other.mode_req_local_alt:
            return False
        if self.mode_req_mission != other.mode_req_mission:
            return False
        if self.mode_req_offboard_signal != other.mode_req_offboard_signal:
            return False
        if self.mode_req_home_position != other.mode_req_home_position:
            return False
        if self.mode_req_prevent_arming != other.mode_req_prevent_arming:
            return False
        if self.mode_req_other != other.mode_req_other:
            return False
        if self.calibration_enabled != other.calibration_enabled:
            return False
        if self.pre_flight_checks_pass != other.pre_flight_checks_pass:
            return False
        if self.auto_mission_available != other.auto_mission_available:
            return False
        if self.angular_velocity_valid != other.angular_velocity_valid:
            return False
        if self.attitude_valid != other.attitude_valid:
            return False
        if self.local_altitude_valid != other.local_altitude_valid:
            return False
        if self.local_position_valid != other.local_position_valid:
            return False
        if self.local_position_valid_relaxed != other.local_position_valid_relaxed:
            return False
        if self.local_velocity_valid != other.local_velocity_valid:
            return False
        if self.global_position_valid != other.global_position_valid:
            return False
        if self.gps_position_valid != other.gps_position_valid:
            return False
        if self.home_position_valid != other.home_position_valid:
            return False
        if self.offboard_control_signal_lost != other.offboard_control_signal_lost:
            return False
        if self.rc_signal_found_once != other.rc_signal_found_once:
            return False
        if self.rc_calibration_in_progress != other.rc_calibration_in_progress:
            return False
        if self.vtol_transition_failure != other.vtol_transition_failure:
            return False
        if self.battery_low_remaining_time != other.battery_low_remaining_time:
            return False
        if self.battery_unhealthy != other.battery_unhealthy:
            return False
        if self.battery_warning != other.battery_warning:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def mode_req_angular_velocity(self):
        """Message field 'mode_req_angular_velocity'."""
        return self._mode_req_angular_velocity

    @mode_req_angular_velocity.setter
    def mode_req_angular_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_angular_velocity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_angular_velocity' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_angular_velocity = value

    @property
    def mode_req_attitude(self):
        """Message field 'mode_req_attitude'."""
        return self._mode_req_attitude

    @mode_req_attitude.setter
    def mode_req_attitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_attitude' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_attitude' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_attitude = value

    @property
    def mode_req_local_position(self):
        """Message field 'mode_req_local_position'."""
        return self._mode_req_local_position

    @mode_req_local_position.setter
    def mode_req_local_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_local_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_local_position' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_local_position = value

    @property
    def mode_req_local_position_relaxed(self):
        """Message field 'mode_req_local_position_relaxed'."""
        return self._mode_req_local_position_relaxed

    @mode_req_local_position_relaxed.setter
    def mode_req_local_position_relaxed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_local_position_relaxed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_local_position_relaxed' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_local_position_relaxed = value

    @property
    def mode_req_global_position(self):
        """Message field 'mode_req_global_position'."""
        return self._mode_req_global_position

    @mode_req_global_position.setter
    def mode_req_global_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_global_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_global_position' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_global_position = value

    @property
    def mode_req_local_alt(self):
        """Message field 'mode_req_local_alt'."""
        return self._mode_req_local_alt

    @mode_req_local_alt.setter
    def mode_req_local_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_local_alt' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_local_alt' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_local_alt = value

    @property
    def mode_req_mission(self):
        """Message field 'mode_req_mission'."""
        return self._mode_req_mission

    @mode_req_mission.setter
    def mode_req_mission(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_mission' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_mission' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_mission = value

    @property
    def mode_req_offboard_signal(self):
        """Message field 'mode_req_offboard_signal'."""
        return self._mode_req_offboard_signal

    @mode_req_offboard_signal.setter
    def mode_req_offboard_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_offboard_signal' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_offboard_signal' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_offboard_signal = value

    @property
    def mode_req_home_position(self):
        """Message field 'mode_req_home_position'."""
        return self._mode_req_home_position

    @mode_req_home_position.setter
    def mode_req_home_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_home_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_home_position' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_home_position = value

    @property
    def mode_req_prevent_arming(self):
        """Message field 'mode_req_prevent_arming'."""
        return self._mode_req_prevent_arming

    @mode_req_prevent_arming.setter
    def mode_req_prevent_arming(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_prevent_arming' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_prevent_arming' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_prevent_arming = value

    @property
    def mode_req_other(self):
        """Message field 'mode_req_other'."""
        return self._mode_req_other

    @mode_req_other.setter
    def mode_req_other(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_other' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_other' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_other = value

    @property
    def calibration_enabled(self):
        """Message field 'calibration_enabled'."""
        return self._calibration_enabled

    @calibration_enabled.setter
    def calibration_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibration_enabled' field must be of type 'bool'"
        self._calibration_enabled = value

    @property
    def pre_flight_checks_pass(self):
        """Message field 'pre_flight_checks_pass'."""
        return self._pre_flight_checks_pass

    @pre_flight_checks_pass.setter
    def pre_flight_checks_pass(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pre_flight_checks_pass' field must be of type 'bool'"
        self._pre_flight_checks_pass = value

    @property
    def auto_mission_available(self):
        """Message field 'auto_mission_available'."""
        return self._auto_mission_available

    @auto_mission_available.setter
    def auto_mission_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_mission_available' field must be of type 'bool'"
        self._auto_mission_available = value

    @property
    def angular_velocity_valid(self):
        """Message field 'angular_velocity_valid'."""
        return self._angular_velocity_valid

    @angular_velocity_valid.setter
    def angular_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'angular_velocity_valid' field must be of type 'bool'"
        self._angular_velocity_valid = value

    @property
    def attitude_valid(self):
        """Message field 'attitude_valid'."""
        return self._attitude_valid

    @attitude_valid.setter
    def attitude_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attitude_valid' field must be of type 'bool'"
        self._attitude_valid = value

    @property
    def local_altitude_valid(self):
        """Message field 'local_altitude_valid'."""
        return self._local_altitude_valid

    @local_altitude_valid.setter
    def local_altitude_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_altitude_valid' field must be of type 'bool'"
        self._local_altitude_valid = value

    @property
    def local_position_valid(self):
        """Message field 'local_position_valid'."""
        return self._local_position_valid

    @local_position_valid.setter
    def local_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_position_valid' field must be of type 'bool'"
        self._local_position_valid = value

    @property
    def local_position_valid_relaxed(self):
        """Message field 'local_position_valid_relaxed'."""
        return self._local_position_valid_relaxed

    @local_position_valid_relaxed.setter
    def local_position_valid_relaxed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_position_valid_relaxed' field must be of type 'bool'"
        self._local_position_valid_relaxed = value

    @property
    def local_velocity_valid(self):
        """Message field 'local_velocity_valid'."""
        return self._local_velocity_valid

    @local_velocity_valid.setter
    def local_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_velocity_valid' field must be of type 'bool'"
        self._local_velocity_valid = value

    @property
    def global_position_valid(self):
        """Message field 'global_position_valid'."""
        return self._global_position_valid

    @global_position_valid.setter
    def global_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'global_position_valid' field must be of type 'bool'"
        self._global_position_valid = value

    @property
    def gps_position_valid(self):
        """Message field 'gps_position_valid'."""
        return self._gps_position_valid

    @gps_position_valid.setter
    def gps_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_position_valid' field must be of type 'bool'"
        self._gps_position_valid = value

    @property
    def home_position_valid(self):
        """Message field 'home_position_valid'."""
        return self._home_position_valid

    @home_position_valid.setter
    def home_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'home_position_valid' field must be of type 'bool'"
        self._home_position_valid = value

    @property
    def offboard_control_signal_lost(self):
        """Message field 'offboard_control_signal_lost'."""
        return self._offboard_control_signal_lost

    @offboard_control_signal_lost.setter
    def offboard_control_signal_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'offboard_control_signal_lost' field must be of type 'bool'"
        self._offboard_control_signal_lost = value

    @property
    def rc_signal_found_once(self):
        """Message field 'rc_signal_found_once'."""
        return self._rc_signal_found_once

    @rc_signal_found_once.setter
    def rc_signal_found_once(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_signal_found_once' field must be of type 'bool'"
        self._rc_signal_found_once = value

    @property
    def rc_calibration_in_progress(self):
        """Message field 'rc_calibration_in_progress'."""
        return self._rc_calibration_in_progress

    @rc_calibration_in_progress.setter
    def rc_calibration_in_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_calibration_in_progress' field must be of type 'bool'"
        self._rc_calibration_in_progress = value

    @property
    def vtol_transition_failure(self):
        """Message field 'vtol_transition_failure'."""
        return self._vtol_transition_failure

    @vtol_transition_failure.setter
    def vtol_transition_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vtol_transition_failure' field must be of type 'bool'"
        self._vtol_transition_failure = value

    @property
    def battery_low_remaining_time(self):
        """Message field 'battery_low_remaining_time'."""
        return self._battery_low_remaining_time

    @battery_low_remaining_time.setter
    def battery_low_remaining_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'battery_low_remaining_time' field must be of type 'bool'"
        self._battery_low_remaining_time = value

    @property
    def battery_unhealthy(self):
        """Message field 'battery_unhealthy'."""
        return self._battery_unhealthy

    @battery_unhealthy.setter
    def battery_unhealthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'battery_unhealthy' field must be of type 'bool'"
        self._battery_unhealthy = value

    @property
    def battery_warning(self):
        """Message field 'battery_warning'."""
        return self._battery_warning

    @battery_warning.setter
    def battery_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery_warning' field must be an unsigned integer in [0, 255]"
        self._battery_warning = value
