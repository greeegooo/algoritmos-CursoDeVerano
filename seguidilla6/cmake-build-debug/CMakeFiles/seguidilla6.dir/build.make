# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/igreg/CLionProjects/seguidilla6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/igreg/CLionProjects/seguidilla6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/seguidilla6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/seguidilla6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/seguidilla6.dir/flags.make

CMakeFiles/seguidilla6.dir/main.cpp.o: CMakeFiles/seguidilla6.dir/flags.make
CMakeFiles/seguidilla6.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/igreg/CLionProjects/seguidilla6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/seguidilla6.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/seguidilla6.dir/main.cpp.o -c /Users/igreg/CLionProjects/seguidilla6/main.cpp

CMakeFiles/seguidilla6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/seguidilla6.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/igreg/CLionProjects/seguidilla6/main.cpp > CMakeFiles/seguidilla6.dir/main.cpp.i

CMakeFiles/seguidilla6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/seguidilla6.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/igreg/CLionProjects/seguidilla6/main.cpp -o CMakeFiles/seguidilla6.dir/main.cpp.s

CMakeFiles/seguidilla6.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/seguidilla6.dir/main.cpp.o.requires

CMakeFiles/seguidilla6.dir/main.cpp.o.provides: CMakeFiles/seguidilla6.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/seguidilla6.dir/build.make CMakeFiles/seguidilla6.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/seguidilla6.dir/main.cpp.o.provides

CMakeFiles/seguidilla6.dir/main.cpp.o.provides.build: CMakeFiles/seguidilla6.dir/main.cpp.o


# Object files for target seguidilla6
seguidilla6_OBJECTS = \
"CMakeFiles/seguidilla6.dir/main.cpp.o"

# External object files for target seguidilla6
seguidilla6_EXTERNAL_OBJECTS =

seguidilla6: CMakeFiles/seguidilla6.dir/main.cpp.o
seguidilla6: CMakeFiles/seguidilla6.dir/build.make
seguidilla6: CMakeFiles/seguidilla6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/igreg/CLionProjects/seguidilla6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable seguidilla6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/seguidilla6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/seguidilla6.dir/build: seguidilla6

.PHONY : CMakeFiles/seguidilla6.dir/build

CMakeFiles/seguidilla6.dir/requires: CMakeFiles/seguidilla6.dir/main.cpp.o.requires

.PHONY : CMakeFiles/seguidilla6.dir/requires

CMakeFiles/seguidilla6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/seguidilla6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/seguidilla6.dir/clean

CMakeFiles/seguidilla6.dir/depend:
	cd /Users/igreg/CLionProjects/seguidilla6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/igreg/CLionProjects/seguidilla6 /Users/igreg/CLionProjects/seguidilla6 /Users/igreg/CLionProjects/seguidilla6/cmake-build-debug /Users/igreg/CLionProjects/seguidilla6/cmake-build-debug /Users/igreg/CLionProjects/seguidilla6/cmake-build-debug/CMakeFiles/seguidilla6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/seguidilla6.dir/depend

