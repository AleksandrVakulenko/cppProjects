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
CMAKE_SOURCE_DIR = F:\_OneDrive\OneDrive\ClionPrj\String

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\_OneDrive\OneDrive\ClionPrj\String\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/String.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/String.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/String.dir/flags.make

CMakeFiles/String.dir/main.cpp.obj: CMakeFiles/String.dir/flags.make
CMakeFiles/String.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\_OneDrive\OneDrive\ClionPrj\String\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/String.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\String.dir\main.cpp.obj -c F:\_OneDrive\OneDrive\ClionPrj\String\main.cpp

CMakeFiles/String.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/String.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\_OneDrive\OneDrive\ClionPrj\String\main.cpp > CMakeFiles\String.dir\main.cpp.i

CMakeFiles/String.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/String.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\_OneDrive\OneDrive\ClionPrj\String\main.cpp -o CMakeFiles\String.dir\main.cpp.s

# Object files for target String
String_OBJECTS = \
"CMakeFiles/String.dir/main.cpp.obj"

# External object files for target String
String_EXTERNAL_OBJECTS =

String.exe: CMakeFiles/String.dir/main.cpp.obj
String.exe: CMakeFiles/String.dir/build.make
String.exe: CMakeFiles/String.dir/linklibs.rsp
String.exe: CMakeFiles/String.dir/objects1.rsp
String.exe: CMakeFiles/String.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\_OneDrive\OneDrive\ClionPrj\String\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable String.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\String.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/String.dir/build: String.exe

.PHONY : CMakeFiles/String.dir/build

CMakeFiles/String.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\String.dir\cmake_clean.cmake
.PHONY : CMakeFiles/String.dir/clean

CMakeFiles/String.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\_OneDrive\OneDrive\ClionPrj\String F:\_OneDrive\OneDrive\ClionPrj\String F:\_OneDrive\OneDrive\ClionPrj\String\cmake-build-debug F:\_OneDrive\OneDrive\ClionPrj\String\cmake-build-debug F:\_OneDrive\OneDrive\ClionPrj\String\cmake-build-debug\CMakeFiles\String.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/String.dir/depend

