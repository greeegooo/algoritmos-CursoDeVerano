# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /Users/igreg/Dev/CLionProjects/Conjuntos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/igreg/Dev/CLionProjects/Conjuntos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Conjuntos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Conjuntos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Conjuntos.dir/flags.make

CMakeFiles/Conjuntos.dir/main.cpp.o: CMakeFiles/Conjuntos.dir/flags.make
CMakeFiles/Conjuntos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/igreg/Dev/CLionProjects/Conjuntos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Conjuntos.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Conjuntos.dir/main.cpp.o -c /Users/igreg/Dev/CLionProjects/Conjuntos/main.cpp

CMakeFiles/Conjuntos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Conjuntos.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/igreg/Dev/CLionProjects/Conjuntos/main.cpp > CMakeFiles/Conjuntos.dir/main.cpp.i

CMakeFiles/Conjuntos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Conjuntos.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/igreg/Dev/CLionProjects/Conjuntos/main.cpp -o CMakeFiles/Conjuntos.dir/main.cpp.s

CMakeFiles/Conjuntos.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Conjuntos.dir/main.cpp.o.requires

CMakeFiles/Conjuntos.dir/main.cpp.o.provides: CMakeFiles/Conjuntos.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Conjuntos.dir/build.make CMakeFiles/Conjuntos.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Conjuntos.dir/main.cpp.o.provides

CMakeFiles/Conjuntos.dir/main.cpp.o.provides.build: CMakeFiles/Conjuntos.dir/main.cpp.o


# Object files for target Conjuntos
Conjuntos_OBJECTS = \
"CMakeFiles/Conjuntos.dir/main.cpp.o"

# External object files for target Conjuntos
Conjuntos_EXTERNAL_OBJECTS =

Conjuntos: CMakeFiles/Conjuntos.dir/main.cpp.o
Conjuntos: CMakeFiles/Conjuntos.dir/build.make
Conjuntos: CMakeFiles/Conjuntos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/igreg/Dev/CLionProjects/Conjuntos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Conjuntos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Conjuntos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Conjuntos.dir/build: Conjuntos

.PHONY : CMakeFiles/Conjuntos.dir/build

CMakeFiles/Conjuntos.dir/requires: CMakeFiles/Conjuntos.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Conjuntos.dir/requires

CMakeFiles/Conjuntos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Conjuntos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Conjuntos.dir/clean

CMakeFiles/Conjuntos.dir/depend:
	cd /Users/igreg/Dev/CLionProjects/Conjuntos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/igreg/Dev/CLionProjects/Conjuntos /Users/igreg/Dev/CLionProjects/Conjuntos /Users/igreg/Dev/CLionProjects/Conjuntos/cmake-build-debug /Users/igreg/Dev/CLionProjects/Conjuntos/cmake-build-debug /Users/igreg/Dev/CLionProjects/Conjuntos/cmake-build-debug/CMakeFiles/Conjuntos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Conjuntos.dir/depend

