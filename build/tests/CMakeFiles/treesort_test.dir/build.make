# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xion/Documents/Programming/nerdy/nerdy.cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xion/Documents/Programming/nerdy/nerdy.cpp/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/treesort_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/treesort_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/treesort_test.dir/flags.make

tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o: tests/CMakeFiles/treesort_test.dir/flags.make
tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o: ../tests/treesort_test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xion/Documents/Programming/nerdy/nerdy.cpp/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o"
	cd /home/xion/Documents/Programming/nerdy/nerdy.cpp/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/treesort_test.dir/treesort_test.cpp.o -c /home/xion/Documents/Programming/nerdy/nerdy.cpp/tests/treesort_test.cpp

tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/treesort_test.dir/treesort_test.cpp.i"
	cd /home/xion/Documents/Programming/nerdy/nerdy.cpp/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/xion/Documents/Programming/nerdy/nerdy.cpp/tests/treesort_test.cpp > CMakeFiles/treesort_test.dir/treesort_test.cpp.i

tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/treesort_test.dir/treesort_test.cpp.s"
	cd /home/xion/Documents/Programming/nerdy/nerdy.cpp/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/xion/Documents/Programming/nerdy/nerdy.cpp/tests/treesort_test.cpp -o CMakeFiles/treesort_test.dir/treesort_test.cpp.s

tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o.requires:
.PHONY : tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o.requires

tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o.provides: tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/treesort_test.dir/build.make tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o.provides.build
.PHONY : tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o.provides

tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o.provides.build: tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o

# Object files for target treesort_test
treesort_test_OBJECTS = \
"CMakeFiles/treesort_test.dir/treesort_test.cpp.o"

# External object files for target treesort_test
treesort_test_EXTERNAL_OBJECTS =

tests/treesort_test: tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o
tests/treesort_test: tests/CMakeFiles/treesort_test.dir/build.make
tests/treesort_test: tests/CMakeFiles/treesort_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable treesort_test"
	cd /home/xion/Documents/Programming/nerdy/nerdy.cpp/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/treesort_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/treesort_test.dir/build: tests/treesort_test
.PHONY : tests/CMakeFiles/treesort_test.dir/build

tests/CMakeFiles/treesort_test.dir/requires: tests/CMakeFiles/treesort_test.dir/treesort_test.cpp.o.requires
.PHONY : tests/CMakeFiles/treesort_test.dir/requires

tests/CMakeFiles/treesort_test.dir/clean:
	cd /home/xion/Documents/Programming/nerdy/nerdy.cpp/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/treesort_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/treesort_test.dir/clean

tests/CMakeFiles/treesort_test.dir/depend:
	cd /home/xion/Documents/Programming/nerdy/nerdy.cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xion/Documents/Programming/nerdy/nerdy.cpp /home/xion/Documents/Programming/nerdy/nerdy.cpp/tests /home/xion/Documents/Programming/nerdy/nerdy.cpp/build /home/xion/Documents/Programming/nerdy/nerdy.cpp/build/tests /home/xion/Documents/Programming/nerdy/nerdy.cpp/build/tests/CMakeFiles/treesort_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/treesort_test.dir/depend

