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
CMAKE_SOURCE_DIR = F:\_OneDrive\OneDrive\ClionPrj\Recursion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\_OneDrive\OneDrive\ClionPrj\Recursion\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Recursion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Recursion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Recursion.dir/flags.make

CMakeFiles/Recursion.dir/main.cpp.obj: CMakeFiles/Recursion.dir/flags.make
CMakeFiles/Recursion.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\_OneDrive\OneDrive\ClionPrj\Recursion\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Recursion.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Recursion.dir\main.cpp.obj -c F:\_OneDrive\OneDrive\ClionPrj\Recursion\main.cpp

CMakeFiles/Recursion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Recursion.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\_OneDrive\OneDrive\ClionPrj\Recursion\main.cpp > CMakeFiles\Recursion.dir\main.cpp.i

CMakeFiles/Recursion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Recursion.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\_OneDrive\OneDrive\ClionPrj\Recursion\main.cpp -o CMakeFiles\Recursion.dir\main.cpp.s

# Object files for target Recursion
Recursion_OBJECTS = \
"CMakeFiles/Recursion.dir/main.cpp.obj"

# External object files for target Recursion
Recursion_EXTERNAL_OBJECTS =

Recursion.exe: CMakeFiles/Recursion.dir/main.cpp.obj
Recursion.exe: CMakeFiles/Recursion.dir/build.make
Recursion.exe: CMakeFiles/Recursion.dir/linklibs.rsp
Recursion.exe: CMakeFiles/Recursion.dir/objects1.rsp
Recursion.exe: CMakeFiles/Recursion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\_OneDrive\OneDrive\ClionPrj\Recursion\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Recursion.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Recursion.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Recursion.dir/build: Recursion.exe

.PHONY : CMakeFiles/Recursion.dir/build

CMakeFiles/Recursion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Recursion.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Recursion.dir/clean

CMakeFiles/Recursion.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\_OneDrive\OneDrive\ClionPrj\Recursion F:\_OneDrive\OneDrive\ClionPrj\Recursion F:\_OneDrive\OneDrive\ClionPrj\Recursion\cmake-build-debug F:\_OneDrive\OneDrive\ClionPrj\Recursion\cmake-build-debug F:\_OneDrive\OneDrive\ClionPrj\Recursion\cmake-build-debug\CMakeFiles\Recursion.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Recursion.dir/depend
