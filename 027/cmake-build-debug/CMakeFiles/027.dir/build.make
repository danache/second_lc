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
CMAKE_COMMAND = /home/dan/clion-2017.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/dan/clion-2017.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dan/coding/second-lc/027

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dan/coding/second-lc/027/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/027.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/027.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/027.dir/flags.make

CMakeFiles/027.dir/main.cpp.o: CMakeFiles/027.dir/flags.make
CMakeFiles/027.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dan/coding/second-lc/027/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/027.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/027.dir/main.cpp.o -c /home/dan/coding/second-lc/027/main.cpp

CMakeFiles/027.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/027.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dan/coding/second-lc/027/main.cpp > CMakeFiles/027.dir/main.cpp.i

CMakeFiles/027.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/027.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dan/coding/second-lc/027/main.cpp -o CMakeFiles/027.dir/main.cpp.s

CMakeFiles/027.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/027.dir/main.cpp.o.requires

CMakeFiles/027.dir/main.cpp.o.provides: CMakeFiles/027.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/027.dir/build.make CMakeFiles/027.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/027.dir/main.cpp.o.provides

CMakeFiles/027.dir/main.cpp.o.provides.build: CMakeFiles/027.dir/main.cpp.o


# Object files for target 027
027_OBJECTS = \
"CMakeFiles/027.dir/main.cpp.o"

# External object files for target 027
027_EXTERNAL_OBJECTS =

027: CMakeFiles/027.dir/main.cpp.o
027: CMakeFiles/027.dir/build.make
027: CMakeFiles/027.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dan/coding/second-lc/027/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 027"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/027.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/027.dir/build: 027

.PHONY : CMakeFiles/027.dir/build

CMakeFiles/027.dir/requires: CMakeFiles/027.dir/main.cpp.o.requires

.PHONY : CMakeFiles/027.dir/requires

CMakeFiles/027.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/027.dir/cmake_clean.cmake
.PHONY : CMakeFiles/027.dir/clean

CMakeFiles/027.dir/depend:
	cd /home/dan/coding/second-lc/027/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dan/coding/second-lc/027 /home/dan/coding/second-lc/027 /home/dan/coding/second-lc/027/cmake-build-debug /home/dan/coding/second-lc/027/cmake-build-debug /home/dan/coding/second-lc/027/cmake-build-debug/CMakeFiles/027.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/027.dir/depend

