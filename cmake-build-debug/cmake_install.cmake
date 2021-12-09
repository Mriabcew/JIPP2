# Install script for directory: K:/JIPP2

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/JIPP2")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("K:/JIPP2/cmake-build-debug/LAB_1/allocation_basics/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_1/SimpleCalc/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_2/firstLib/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_2/firstLibCall/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_3/firstClass/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_3/structExercise/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_3/ClassExercise/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_4/Example/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_5/5.1/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_5/5.2/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_5/5.3/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_6/Vector/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_6/Node/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_6/Complex/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_6/Traingle/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_7/Figure/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/LAB_8/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/MatrixProject/matrixLib/cmake_install.cmake")
  include("K:/JIPP2/cmake-build-debug/MatrixProject/matrixApp/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "K:/JIPP2/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")