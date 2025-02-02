# Install script for directory: /home/droneleaf/software-stack/LeafMC/src

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/ui/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/ADSB/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/AnalyzeView/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/api/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Audio/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/AutoPilotPlugins/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Camera/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/comm/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Compression/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/FactSystem/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/FirmwarePlugin/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/FlightDisplay/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/FlightMap/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/FollowMe/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Geo/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Gimbal/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/GPS/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Joystick/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/MissionManager/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/PlanView/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/PositionManager/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/QmlControls/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/QtLocationPlugin/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Settings/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Terrain/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/uas/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/Vehicle/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/VehicleSetup/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/VideoManager/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/VideoReceiver/cmake_install.cmake")
  include("/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/src/SiYi/cmake_install.cmake")

endif()

