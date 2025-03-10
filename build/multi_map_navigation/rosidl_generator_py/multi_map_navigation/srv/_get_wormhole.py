# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multi_map_navigation:srv/GetWormhole.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetWormhole_Request(type):
    """Metaclass of message 'GetWormhole_Request'."""

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
            module = import_type_support('multi_map_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'multi_map_navigation.srv.GetWormhole_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_wormhole__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_wormhole__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_wormhole__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_wormhole__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_wormhole__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetWormhole_Request(metaclass=Metaclass_GetWormhole_Request):
    """Message class 'GetWormhole_Request'."""

    __slots__ = [
        '_map_from',
        '_map_to',
    ]

    _fields_and_field_types = {
        'map_from': 'string',
        'map_to': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.map_from = kwargs.get('map_from', str())
        self.map_to = kwargs.get('map_to', str())

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
        if self.map_from != other.map_from:
            return False
        if self.map_to != other.map_to:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def map_from(self):
        """Message field 'map_from'."""
        return self._map_from

    @map_from.setter
    def map_from(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_from' field must be of type 'str'"
        self._map_from = value

    @builtins.property
    def map_to(self):
        """Message field 'map_to'."""
        return self._map_to

    @map_to.setter
    def map_to(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_to' field must be of type 'str'"
        self._map_to = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetWormhole_Response(type):
    """Metaclass of message 'GetWormhole_Response'."""

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
            module = import_type_support('multi_map_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'multi_map_navigation.srv.GetWormhole_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_wormhole__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_wormhole__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_wormhole__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_wormhole__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_wormhole__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetWormhole_Response(metaclass=Metaclass_GetWormhole_Response):
    """Message class 'GetWormhole_Response'."""

    __slots__ = [
        '_x_from',
        '_y_from',
        '_theta_from',
        '_x_to',
        '_y_to',
        '_theta_to',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'x_from': 'double',
        'y_from': 'double',
        'theta_from': 'double',
        'x_to': 'double',
        'y_to': 'double',
        'theta_to': 'double',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_from = kwargs.get('x_from', float())
        self.y_from = kwargs.get('y_from', float())
        self.theta_from = kwargs.get('theta_from', float())
        self.x_to = kwargs.get('x_to', float())
        self.y_to = kwargs.get('y_to', float())
        self.theta_to = kwargs.get('theta_to', float())
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.x_from != other.x_from:
            return False
        if self.y_from != other.y_from:
            return False
        if self.theta_from != other.theta_from:
            return False
        if self.x_to != other.x_to:
            return False
        if self.y_to != other.y_to:
            return False
        if self.theta_to != other.theta_to:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_from(self):
        """Message field 'x_from'."""
        return self._x_from

    @x_from.setter
    def x_from(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_from' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_from' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_from = value

    @builtins.property
    def y_from(self):
        """Message field 'y_from'."""
        return self._y_from

    @y_from.setter
    def y_from(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_from' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_from' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_from = value

    @builtins.property
    def theta_from(self):
        """Message field 'theta_from'."""
        return self._theta_from

    @theta_from.setter
    def theta_from(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_from' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_from' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_from = value

    @builtins.property
    def x_to(self):
        """Message field 'x_to'."""
        return self._x_to

    @x_to.setter
    def x_to(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_to' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_to' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_to = value

    @builtins.property
    def y_to(self):
        """Message field 'y_to'."""
        return self._y_to

    @y_to.setter
    def y_to(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_to' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_to' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_to = value

    @builtins.property
    def theta_to(self):
        """Message field 'theta_to'."""
        return self._theta_to

    @theta_to.setter
    def theta_to(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_to' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_to' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_to = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_GetWormhole(type):
    """Metaclass of service 'GetWormhole'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('multi_map_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'multi_map_navigation.srv.GetWormhole')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_wormhole

            from multi_map_navigation.srv import _get_wormhole
            if _get_wormhole.Metaclass_GetWormhole_Request._TYPE_SUPPORT is None:
                _get_wormhole.Metaclass_GetWormhole_Request.__import_type_support__()
            if _get_wormhole.Metaclass_GetWormhole_Response._TYPE_SUPPORT is None:
                _get_wormhole.Metaclass_GetWormhole_Response.__import_type_support__()


class GetWormhole(metaclass=Metaclass_GetWormhole):
    from multi_map_navigation.srv._get_wormhole import GetWormhole_Request as Request
    from multi_map_navigation.srv._get_wormhole import GetWormhole_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
