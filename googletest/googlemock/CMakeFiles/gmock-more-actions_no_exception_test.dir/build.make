# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jens/workspace/googletest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jens/workspace/googletest

# Include any dependencies generated for this target.
include googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/depend.make

# Include the progress variables for this target.
include googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/progress.make

# Include the compile flags for this target's objects.
include googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/flags.make

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o: googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/flags.make
googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o: googlemock/test/gmock-more-actions_test.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jens/workspace/googletest/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o"
	cd /home/jens/workspace/googletest/googlemock && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o -c /home/jens/workspace/googletest/googlemock/test/gmock-more-actions_test.cc

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.i"
	cd /home/jens/workspace/googletest/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/jens/workspace/googletest/googlemock/test/gmock-more-actions_test.cc > CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.i

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.s"
	cd /home/jens/workspace/googletest/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/jens/workspace/googletest/googlemock/test/gmock-more-actions_test.cc -o CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.s

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o.requires:
.PHONY : googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o.requires

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o.provides: googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o.requires
	$(MAKE) -f googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/build.make googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o.provides.build
.PHONY : googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o.provides

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o.provides.build: googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o

# Object files for target gmock-more-actions_no_exception_test
gmock__more__actions_no_exception_test_OBJECTS = \
"CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o"

# External object files for target gmock-more-actions_no_exception_test
gmock__more__actions_no_exception_test_EXTERNAL_OBJECTS =

googlemock/gmock-more-actions_no_exception_test: googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o
googlemock/gmock-more-actions_no_exception_test: googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/build.make
googlemock/gmock-more-actions_no_exception_test: googlemock/libgmock_main_no_exception.a
googlemock/gmock-more-actions_no_exception_test: googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable gmock-more-actions_no_exception_test"
	cd /home/jens/workspace/googletest/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock-more-actions_no_exception_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/build: googlemock/gmock-more-actions_no_exception_test
.PHONY : googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/build

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/requires: googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/test/gmock-more-actions_test.cc.o.requires
.PHONY : googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/requires

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/clean:
	cd /home/jens/workspace/googletest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock-more-actions_no_exception_test.dir/cmake_clean.cmake
.PHONY : googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/clean

googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/depend:
	cd /home/jens/workspace/googletest && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jens/workspace/googletest /home/jens/workspace/googletest/googlemock /home/jens/workspace/googletest /home/jens/workspace/googletest/googlemock /home/jens/workspace/googletest/googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : googlemock/CMakeFiles/gmock-more-actions_no_exception_test.dir/depend

