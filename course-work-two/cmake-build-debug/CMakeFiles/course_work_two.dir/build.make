# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/hans/Code/Personal/c++/course-work-two

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hans/Code/Personal/c++/course-work-two/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/course_work_two.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/course_work_two.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/course_work_two.dir/flags.make

CMakeFiles/course_work_two.dir/main.cpp.o: CMakeFiles/course_work_two.dir/flags.make
CMakeFiles/course_work_two.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hans/Code/Personal/c++/course-work-two/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/course_work_two.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/course_work_two.dir/main.cpp.o -c /Users/hans/Code/Personal/c++/course-work-two/main.cpp

CMakeFiles/course_work_two.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/course_work_two.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hans/Code/Personal/c++/course-work-two/main.cpp > CMakeFiles/course_work_two.dir/main.cpp.i

CMakeFiles/course_work_two.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/course_work_two.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hans/Code/Personal/c++/course-work-two/main.cpp -o CMakeFiles/course_work_two.dir/main.cpp.s

CMakeFiles/course_work_two.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/course_work_two.dir/main.cpp.o.requires

CMakeFiles/course_work_two.dir/main.cpp.o.provides: CMakeFiles/course_work_two.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/course_work_two.dir/build.make CMakeFiles/course_work_two.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/course_work_two.dir/main.cpp.o.provides

CMakeFiles/course_work_two.dir/main.cpp.o.provides.build: CMakeFiles/course_work_two.dir/main.cpp.o


CMakeFiles/course_work_two.dir/toptax.cpp.o: CMakeFiles/course_work_two.dir/flags.make
CMakeFiles/course_work_two.dir/toptax.cpp.o: ../toptax.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hans/Code/Personal/c++/course-work-two/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/course_work_two.dir/toptax.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/course_work_two.dir/toptax.cpp.o -c /Users/hans/Code/Personal/c++/course-work-two/toptax.cpp

CMakeFiles/course_work_two.dir/toptax.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/course_work_two.dir/toptax.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hans/Code/Personal/c++/course-work-two/toptax.cpp > CMakeFiles/course_work_two.dir/toptax.cpp.i

CMakeFiles/course_work_two.dir/toptax.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/course_work_two.dir/toptax.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hans/Code/Personal/c++/course-work-two/toptax.cpp -o CMakeFiles/course_work_two.dir/toptax.cpp.s

CMakeFiles/course_work_two.dir/toptax.cpp.o.requires:

.PHONY : CMakeFiles/course_work_two.dir/toptax.cpp.o.requires

CMakeFiles/course_work_two.dir/toptax.cpp.o.provides: CMakeFiles/course_work_two.dir/toptax.cpp.o.requires
	$(MAKE) -f CMakeFiles/course_work_two.dir/build.make CMakeFiles/course_work_two.dir/toptax.cpp.o.provides.build
.PHONY : CMakeFiles/course_work_two.dir/toptax.cpp.o.provides

CMakeFiles/course_work_two.dir/toptax.cpp.o.provides.build: CMakeFiles/course_work_two.dir/toptax.cpp.o


# Object files for target course_work_two
course_work_two_OBJECTS = \
"CMakeFiles/course_work_two.dir/main.cpp.o" \
"CMakeFiles/course_work_two.dir/toptax.cpp.o"

# External object files for target course_work_two
course_work_two_EXTERNAL_OBJECTS =

course_work_two: CMakeFiles/course_work_two.dir/main.cpp.o
course_work_two: CMakeFiles/course_work_two.dir/toptax.cpp.o
course_work_two: CMakeFiles/course_work_two.dir/build.make
course_work_two: CMakeFiles/course_work_two.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hans/Code/Personal/c++/course-work-two/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable course_work_two"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/course_work_two.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/course_work_two.dir/build: course_work_two

.PHONY : CMakeFiles/course_work_two.dir/build

CMakeFiles/course_work_two.dir/requires: CMakeFiles/course_work_two.dir/main.cpp.o.requires
CMakeFiles/course_work_two.dir/requires: CMakeFiles/course_work_two.dir/toptax.cpp.o.requires

.PHONY : CMakeFiles/course_work_two.dir/requires

CMakeFiles/course_work_two.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/course_work_two.dir/cmake_clean.cmake
.PHONY : CMakeFiles/course_work_two.dir/clean

CMakeFiles/course_work_two.dir/depend:
	cd /Users/hans/Code/Personal/c++/course-work-two/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hans/Code/Personal/c++/course-work-two /Users/hans/Code/Personal/c++/course-work-two /Users/hans/Code/Personal/c++/course-work-two/cmake-build-debug /Users/hans/Code/Personal/c++/course-work-two/cmake-build-debug /Users/hans/Code/Personal/c++/course-work-two/cmake-build-debug/CMakeFiles/course_work_two.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/course_work_two.dir/depend

