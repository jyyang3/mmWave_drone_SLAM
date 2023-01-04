# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mmWave_drone_cartographer_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mmWave_drone_cartographer_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mmWave_drone_cartographer_FOUND FALSE)
  elseif(NOT mmWave_drone_cartographer_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mmWave_drone_cartographer_FOUND FALSE)
  endif()
  return()
endif()
set(_mmWave_drone_cartographer_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mmWave_drone_cartographer_FIND_QUIETLY)
  message(STATUS "Found mmWave_drone_cartographer: 0.0.0 (${mmWave_drone_cartographer_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mmWave_drone_cartographer' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${mmWave_drone_cartographer_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mmWave_drone_cartographer_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mmWave_drone_cartographer_DIR}/${_extra}")
endforeach()
