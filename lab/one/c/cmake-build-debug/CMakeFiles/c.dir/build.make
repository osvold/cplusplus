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
CMAKE_SOURCE_DIR = /Users/hans/Code/Personal/c++/lab/one/c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hans/Code/Personal/c++/lab/one/c/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c.dir/flags.make

CMakeFiles/c.dir/main.cpp.o: CMakeFiles/c.dir/flags.make
CMakeFiles/c.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hans/Code/Personal/c++/lab/one/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/c.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c.dir/main.cpp.o -c /Users/hans/Code/Personal/c++/lab/one/c/main.cpp

CMakeFiles/c.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hans/Code/Personal/c++/lab/one/c/main.cpp > CMakeFiles/c.dir/main.cpp.i

CMakeFiles/c.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hans/Code/Personal/c++/lab/one/c/main.cpp -o CMakeFiles/c.dir/main.cpp.s

CMakeFiles/c.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/c.dir/main.cpp.o.requires

CMakeFiles/c.dir/main.cpp.o.provides: CMakeFiles/c.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/c.dir/build.make CMakeFiles/c.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/c.dir/main.cpp.o.provides

CMakeFiles/c.dir/main.cpp.o.provides.build: CMakeFiles/c.dir/main.cpp.o


CMakeFiles/c.dir/sayHello.cpp.o: CMakeFiles/c.dir/flags.make
CMakeFiles/c.dir/sayHello.cpp.o: ../sayHello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hans/Code/Personal/c++/lab/one/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/c.dir/sayHello.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c.dir/sayHello.cpp.o -c /Users/hans/Code/Personal/c++/lab/one/c/sayHello.cpp

CMakeFiles/c.dir/sayHello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c.dir/sayHello.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hans/Code/Personal/c++/lab/one/c/sayHello.cpp > CMakeFiles/c.dir/sayHello.cpp.i

CMakeFiles/c.dir/sayHello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c.dir/sayHello.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hans/Code/Personal/c++/lab/one/c/sayHello.cpp -o CMakeFiles/c.dir/sayHello.cpp.s

CMakeFiles/c.dir/sayHello.cpp.o.requires:

.PHONY : CMakeFiles/c.dir/sayHello.cpp.o.requires

CMakeFiles/c.dir/sayHello.cpp.o.provides: CMakeFiles/c.dir/sayHello.cpp.o.requires
	$(MAKE) -f CMakeFiles/c.dir/build.make CMakeFiles/c.dir/sayHello.cpp.o.provides.build
.PHONY : CMakeFiles/c.dir/sayHello.cpp.o.provides

CMakeFiles/c.dir/sayHello.cpp.o.provides.build: CMakeFiles/c.dir/sayHello.cpp.o


# Object files for target c
c_OBJECTS = \
"CMakeFiles/c.dir/main.cpp.o" \
"CMakeFiles/c.dir/sayHello.cpp.o"

# External object files for target c
c_EXTERNAL_OBJECTS =

c : CMakeFiles/c.dir/main.cpp.o
c : CMakeFiles/c.dir/sayHello.cpp.o
c : CMakeFiles/c.dir/build.make
c : CMakeFiles/c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hans/Code/Personal/c++/lab/one/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c.dir/build: c

.PHONY : CMakeFiles/c.dir/build

CMakeFiles/c.dir/requires: CMakeFiles/c.dir/main.cpp.o.requires
CMakeFiles/c.dir/requires: CMakeFiles/c.dir/sayHello.cpp.o.requires

.PHONY : CMakeFiles/c.dir/requires

CMakeFiles/c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c.dir/clean

CMakeFiles/c.dir/depend:
	cd /Users/hans/Code/Personal/c++/lab/one/c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hans/Code/Personal/c++/lab/one/c /Users/hans/Code/Personal/c++/lab/one/c /Users/hans/Code/Personal/c++/lab/one/c/cmake-build-debug /Users/hans/Code/Personal/c++/lab/one/c/cmake-build-debug /Users/hans/Code/Personal/c++/lab/one/c/cmake-build-debug/CMakeFiles/c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c.dir/depend

