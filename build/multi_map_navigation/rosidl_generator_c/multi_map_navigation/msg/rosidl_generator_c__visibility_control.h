// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAVIGATION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define MULTI_MAP_NAVIGATION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_multi_map_navigation __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_multi_map_navigation __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_multi_map_navigation __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_multi_map_navigation __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_multi_map_navigation
    #define ROSIDL_GENERATOR_C_PUBLIC_multi_map_navigation ROSIDL_GENERATOR_C_EXPORT_multi_map_navigation
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_multi_map_navigation ROSIDL_GENERATOR_C_IMPORT_multi_map_navigation
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_multi_map_navigation __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_multi_map_navigation
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_multi_map_navigation __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_multi_map_navigation
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // MULTI_MAP_NAVIGATION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
