# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = C:\Programs\CLion_2021.1.1\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Programs\CLion_2021.1.1\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/004.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/004.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/004.dir/flags.make

CMakeFiles/004.dir/main.cpp.obj: CMakeFiles/004.dir/flags.make
CMakeFiles/004.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/004.dir/main.cpp.obj"
	C:\Programs\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\004.dir\main.cpp.obj -c C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\main.cpp

CMakeFiles/004.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/004.dir/main.cpp.i"
	C:\Programs\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\main.cpp > CMakeFiles\004.dir\main.cpp.i

CMakeFiles/004.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/004.dir/main.cpp.s"
	C:\Programs\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\main.cpp -o CMakeFiles\004.dir\main.cpp.s

CMakeFiles/004.dir/myCode.cpp.obj: CMakeFiles/004.dir/flags.make
CMakeFiles/004.dir/myCode.cpp.obj: ../myCode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/004.dir/myCode.cpp.obj"
	C:\Programs\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\004.dir\myCode.cpp.obj -c C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\myCode.cpp

CMakeFiles/004.dir/myCode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/004.dir/myCode.cpp.i"
	C:\Programs\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\myCode.cpp > CMakeFiles\004.dir\myCode.cpp.i

CMakeFiles/004.dir/myCode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/004.dir/myCode.cpp.s"
	C:\Programs\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\myCode.cpp -o CMakeFiles\004.dir\myCode.cpp.s

# Object files for target 004
004_OBJECTS = \
"CMakeFiles/004.dir/main.cpp.obj" \
"CMakeFiles/004.dir/myCode.cpp.obj"

# External object files for target 004
004_EXTERNAL_OBJECTS =

004.exe: CMakeFiles/004.dir/main.cpp.obj
004.exe: CMakeFiles/004.dir/myCode.cpp.obj
004.exe: CMakeFiles/004.dir/build.make
004.exe: CMakeFiles/004.dir/linklibs.rsp
004.exe: CMakeFiles/004.dir/objects1.rsp
004.exe: CMakeFiles/004.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 004.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\004.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/004.dir/build: 004.exe

.PHONY : CMakeFiles/004.dir/build

CMakeFiles/004.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\004.dir\cmake_clean.cmake
.PHONY : CMakeFiles/004.dir/clean

CMakeFiles/004.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004 C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004 C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\cmake-build-debug C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\cmake-build-debug C:\OneDrive\_CPP_projects\_Windows\_OpenGL\004\cmake-build-debug\CMakeFiles\004.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/004.dir/depend

