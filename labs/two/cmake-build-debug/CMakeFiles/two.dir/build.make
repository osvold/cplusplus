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
CMAKE_SOURCE_DIR = /Users/hans/Code/Personal/c++/labs/two

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hans/Code/Personal/c++/labs/two/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/two.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/two.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/two.dir/flags.make

CMakeFiles/two.dir/main.cpp.o: CMakeFiles/two.dir/flags.make
CMakeFiles/two.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hans/Code/Personal/c++/labs/two/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/two.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/two.dir/main.cpp.o -c /Users/hans/Code/Personal/c++/labs/two/main.cpp

CMakeFiles/two.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/two.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hans/Code/Personal/c++/labs/two/main.cpp > CMakeFiles/two.dir/main.cpp.i

CMakeFiles/two.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/two.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hans/Code/Personal/c++/labs/two/main.cpp -o CMakeFiles/two.dir/main.cpp.s

CMakeFiles/two.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/two.dir/main.cpp.o.requires

CMakeFiles/two.dir/main.cpp.o.provides: CMakeFiles/two.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/two.dir/build.make CMakeFiles/two.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/two.dir/main.cpp.o.provides

CMakeFiles/two.dir/main.cpp.o.provides.build: CMakeFiles/two.dir/main.cpp.o


# Object files for target two
two_OBJECTS = \
"CMakeFiles/two.dir/main.cpp.o"

# External object files for target two
two_EXTERNAL_OBJECTS =

two: CMakeFiles/two.dir/main.cpp.o
two: CMakeFiles/two.dir/build.make
two: CMakeFiles/two.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hans/Code/Personal/c++/labs/two/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable two"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/two.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/two.dir/build: two

.PHONY : CMakeFiles/two.dir/build

CMakeFiles/two.dir/requires: CMakeFiles/two.dir/main.cpp.o.requires

.PHONY : CMakeFiles/two.dir/requires

CMakeFiles/two.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/two.dir/cmake_clean.cmake
.PHONY : CMakeFiles/two.dir/clean

CMakeFiles/two.dir/depend:
	cd /Users/hans/Code/Personal/c++/labs/two/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hans/Code/Personal/c++/labs/two /Users/hans/Code/Personal/c++/labs/two /Users/hans/Code/Personal/c++/labs/two/cmake-build-debug /Users/hans/Code/Personal/c++/labs/two/cmake-build-debug /Users/hans/Code/Personal/c++/labs/two/cmake-build-debug/CMakeFiles/two.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/two.dir/depend

