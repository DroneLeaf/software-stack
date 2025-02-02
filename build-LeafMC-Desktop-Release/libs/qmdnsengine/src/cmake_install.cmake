# Install script for directory: /home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/qmdnsengine/src/libqmdnsengine.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qmdnsengine" TYPE FILE FILES
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/abstractserver.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/bitmap.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/browser.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/cache.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/dns.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/hostname.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/mdns.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/message.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/prober.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/provider.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/query.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/record.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/resolver.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/server.h"
    "/home/droneleaf/software-stack/LeafMC/libs/qmdnsengine/src/include/qmdnsengine/service.h"
    "/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/qmdnsengine/src/qmdnsengine_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake"
         "/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/qmdnsengine/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/qmdnsengine/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/qmdnsengine/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/qmdnsengine/src/qmdnsengineConfigVersion.cmake")
endif()

