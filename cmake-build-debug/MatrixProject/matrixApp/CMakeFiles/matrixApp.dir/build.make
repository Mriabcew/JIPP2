# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "K:\CLion\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "K:\CLion\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = K:\JIPP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = K:\JIPP2\cmake-build-debug

# Include any dependencies generated for this target.
include MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/depend.make
# Include the progress variables for this target.
include MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/progress.make

# Include the compile flags for this target's objects.
include MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/flags.make

MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/src/main.cpp.obj: MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/flags.make
MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/src/main.cpp.obj: MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/includes_CXX.rsp
MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/src/main.cpp.obj: ../MatrixProject/matrixApp/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=K:\JIPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/src/main.cpp.obj"
	cd /d K:\JIPP2\cmake-build-debug\MatrixProject\matrixApp && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\matrixApp.dir\src\main.cpp.obj -c K:\JIPP2\MatrixProject\matrixApp\src\main.cpp

MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixApp.dir/src/main.cpp.i"
	cd /d K:\JIPP2\cmake-build-debug\MatrixProject\matrixApp && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E K:\JIPP2\MatrixProject\matrixApp\src\main.cpp > CMakeFiles\matrixApp.dir\src\main.cpp.i

MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixApp.dir/src/main.cpp.s"
	cd /d K:\JIPP2\cmake-build-debug\MatrixProject\matrixApp && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S K:\JIPP2\MatrixProject\matrixApp\src\main.cpp -o CMakeFiles\matrixApp.dir\src\main.cpp.s

# Object files for target matrixApp
matrixApp_OBJECTS = \
"CMakeFiles/matrixApp.dir/src/main.cpp.obj"

# External object files for target matrixApp
matrixApp_EXTERNAL_OBJECTS =

MatrixProject/matrixApp/matrixApp.exe: MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/src/main.cpp.obj
MatrixProject/matrixApp/matrixApp.exe: MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/build.make
MatrixProject/matrixApp/matrixApp.exe: MatrixProject/matrixLib/libmatrixLib.a
MatrixProject/matrixApp/matrixApp.exe: MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/linklibs.rsp
MatrixProject/matrixApp/matrixApp.exe: MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/objects1.rsp
MatrixProject/matrixApp/matrixApp.exe: MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=K:\JIPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable matrixApp.exe"
	cd /d K:\JIPP2\cmake-build-debug\MatrixProject\matrixApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\matrixApp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/build: MatrixProject/matrixApp/matrixApp.exe
.PHONY : MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/build

MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/clean:
	cd /d K:\JIPP2\cmake-build-debug\MatrixProject\matrixApp && $(CMAKE_COMMAND) -P CMakeFiles\matrixApp.dir\cmake_clean.cmake
.PHONY : MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/clean

MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" K:\JIPP2 K:\JIPP2\MatrixProject\matrixApp K:\JIPP2\cmake-build-debug K:\JIPP2\cmake-build-debug\MatrixProject\matrixApp K:\JIPP2\cmake-build-debug\MatrixProject\matrixApp\CMakeFiles\matrixApp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : MatrixProject/matrixApp/CMakeFiles/matrixApp.dir/depend

