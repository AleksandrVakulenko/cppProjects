# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "F:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BuildingPrj.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BuildingPrj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BuildingPrj.dir/flags.make

CMakeFiles/BuildingPrj.dir/main.cpp.obj: CMakeFiles/BuildingPrj.dir/flags.make
CMakeFiles/BuildingPrj.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BuildingPrj.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BuildingPrj.dir\main.cpp.obj -c F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\main.cpp

CMakeFiles/BuildingPrj.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BuildingPrj.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\main.cpp > CMakeFiles\BuildingPrj.dir\main.cpp.i

CMakeFiles/BuildingPrj.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BuildingPrj.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\main.cpp -o CMakeFiles\BuildingPrj.dir\main.cpp.s

# Object files for target BuildingPrj
BuildingPrj_OBJECTS = \
"CMakeFiles/BuildingPrj.dir/main.cpp.obj"

# External object files for target BuildingPrj
BuildingPrj_EXTERNAL_OBJECTS =

BuildingPrj.exe: CMakeFiles/BuildingPrj.dir/main.cpp.obj
BuildingPrj.exe: CMakeFiles/BuildingPrj.dir/build.make
BuildingPrj.exe: CMakeFiles/BuildingPrj.dir/linklibs.rsp
BuildingPrj.exe: CMakeFiles/BuildingPrj.dir/objects1.rsp
BuildingPrj.exe: CMakeFiles/BuildingPrj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BuildingPrj.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BuildingPrj.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BuildingPrj.dir/build: BuildingPrj.exe

.PHONY : CMakeFiles/BuildingPrj.dir/build

CMakeFiles/BuildingPrj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BuildingPrj.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BuildingPrj.dir/clean

CMakeFiles/BuildingPrj.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\cmake-build-debug F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\cmake-build-debug F:\_OneDrive\OneDrive\ClionPrj\BuildingPrj\cmake-build-debug\CMakeFiles\BuildingPrj.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BuildingPrj.dir/depend
