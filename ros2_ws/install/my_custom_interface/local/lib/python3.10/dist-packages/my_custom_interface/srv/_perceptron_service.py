# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_custom_interface:srv/PerceptronService.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'inputs'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PerceptronService_Request(type):
    """Metaclass of message 'PerceptronService_Request'."""

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
            module = import_type_support('my_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_custom_interface.srv.PerceptronService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__perceptron_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__perceptron_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__perceptron_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__perceptron_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__perceptron_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PerceptronService_Request(metaclass=Metaclass_PerceptronService_Request):
    """Message class 'PerceptronService_Request'."""

    __slots__ = [
        '_inputs',
        '_activation',
    ]

    _fields_and_field_types = {
        'inputs': 'sequence<double>',
        'activation': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.inputs = array.array('d', kwargs.get('inputs', []))
        self.activation = kwargs.get('activation', str())

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
        if self.inputs != other.inputs:
            return False
        if self.activation != other.activation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def inputs(self):
        """Message field 'inputs'."""
        return self._inputs

    @inputs.setter
    def inputs(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'inputs' array.array() must have the type code of 'd'"
            self._inputs = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'inputs' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._inputs = array.array('d', value)

    @builtins.property
    def activation(self):
        """Message field 'activation'."""
        return self._activation

    @activation.setter
    def activation(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'activation' field must be of type 'str'"
        self._activation = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_PerceptronService_Response(type):
    """Metaclass of message 'PerceptronService_Response'."""

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
            module = import_type_support('my_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_custom_interface.srv.PerceptronService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__perceptron_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__perceptron_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__perceptron_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__perceptron_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__perceptron_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PerceptronService_Response(metaclass=Metaclass_PerceptronService_Response):
    """Message class 'PerceptronService_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', float())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'result' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'result' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._result = value


class Metaclass_PerceptronService(type):
    """Metaclass of service 'PerceptronService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_custom_interface.srv.PerceptronService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__perceptron_service

            from my_custom_interface.srv import _perceptron_service
            if _perceptron_service.Metaclass_PerceptronService_Request._TYPE_SUPPORT is None:
                _perceptron_service.Metaclass_PerceptronService_Request.__import_type_support__()
            if _perceptron_service.Metaclass_PerceptronService_Response._TYPE_SUPPORT is None:
                _perceptron_service.Metaclass_PerceptronService_Response.__import_type_support__()


class PerceptronService(metaclass=Metaclass_PerceptronService):
    from my_custom_interface.srv._perceptron_service import PerceptronService_Request as Request
    from my_custom_interface.srv._perceptron_service import PerceptronService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
