// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from multi_map_navigation:srv/GetWormhole.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "multi_map_navigation/srv/detail/get_wormhole__struct.h"
#include "multi_map_navigation/srv/detail/get_wormhole__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool multi_map_navigation__srv__get_wormhole__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("multi_map_navigation.srv._get_wormhole.GetWormhole_Request", full_classname_dest, 58) == 0);
  }
  multi_map_navigation__srv__GetWormhole_Request * ros_message = _ros_message;
  {  // map_from
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_from");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_from, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // map_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_to");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_to, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * multi_map_navigation__srv__get_wormhole__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetWormhole_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("multi_map_navigation.srv._get_wormhole");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetWormhole_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  multi_map_navigation__srv__GetWormhole_Request * ros_message = (multi_map_navigation__srv__GetWormhole_Request *)raw_ros_message;
  {  // map_from
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_from.data,
      strlen(ros_message->map_from.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_from", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_to
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_to.data,
      strlen(ros_message->map_to.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "multi_map_navigation/srv/detail/get_wormhole__struct.h"
// already included above
// #include "multi_map_navigation/srv/detail/get_wormhole__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool multi_map_navigation__srv__get_wormhole__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("multi_map_navigation.srv._get_wormhole.GetWormhole_Response", full_classname_dest, 59) == 0);
  }
  multi_map_navigation__srv__GetWormhole_Response * ros_message = _ros_message;
  {  // x_from
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_from");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_from = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_from
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_from");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_from = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_from
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_from");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_from = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_to");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_to = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_to");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_to = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_to");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_to = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * multi_map_navigation__srv__get_wormhole__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetWormhole_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("multi_map_navigation.srv._get_wormhole");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetWormhole_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  multi_map_navigation__srv__GetWormhole_Response * ros_message = (multi_map_navigation__srv__GetWormhole_Response *)raw_ros_message;
  {  // x_from
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_from);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_from", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_from
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_from);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_from", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_from
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_from);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_from", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_to
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_to);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_to
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_to);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_to
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_to);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
