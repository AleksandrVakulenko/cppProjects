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
CMAKE_SOURCE_DIR = F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/visualTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/visualTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/visualTest.dir/flags.make

CMakeFiles/visualTest.dir/main.cpp.obj: CMakeFiles/visualTest.dir/flags.make
CMakeFiles/visualTest.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/visualTest.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\visualTest.dir\main.cpp.obj -c F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\main.cpp

CMakeFiles/visualTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/visualTest.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\main.cpp > CMakeFiles\visualTest.dir\main.cpp.i

CMakeFiles/visualTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/visualTest.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\main.cpp -o CMakeFiles\visualTest.dir\main.cpp.s

# Object files for target visualTest
visualTest_OBJECTS = \
"CMakeFiles/visualTest.dir/main.cpp.obj"

# External object files for target visualTest
visualTest_EXTERNAL_OBJECTS =

visualTest.exe: CMakeFiles/visualTest.dir/main.cpp.obj
visualTest.exe: CMakeFiles/visualTest.dir/build.make
visualTest.exe: CMakeFiles/visualTest.dir/linklibs.rsp
visualTest.exe: CMakeFiles/visualTest.dir/objects1.rsp
visualTest.exe: CMakeFiles/visualTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable visualTest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\visualTest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/visualTest.dir/build: visualTest.exe

.PHONY : CMakeFiles/visualTest.dir/build

CMakeFiles/visualTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\visualTest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/visualTest.dir/clean

CMakeFiles/visualTest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\cmake-build-debug F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\cmake-build-debug F:\_OneDrive\OneDrive\ClionPrj\_WindowsAPI\visualTest\cmake-build-debug\CMakeFiles\visualTest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/visualTest.dir/depend

