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
CMAKE_SOURCE_DIR = /Users/hans/Code/Personal/c++/lab/one/d

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/d.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/d.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/d.dir/flags.make

CMakeFiles/d.dir/main.cpp.o: CMakeFiles/d.dir/flags.make
CMakeFiles/d.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/d.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d.dir/main.cpp.o -c /Users/hans/Code/Personal/c++/lab/one/d/main.cpp

CMakeFiles/d.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hans/Code/Personal/c++/lab/one/d/main.cpp > CMakeFiles/d.dir/main.cpp.i

CMakeFiles/d.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hans/Code/Personal/c++/lab/one/d/main.cpp -o CMakeFiles/d.dir/main.cpp.s

CMakeFiles/d.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/d.dir/main.cpp.o.requires

CMakeFiles/d.dir/main.cpp.o.provides: CMakeFiles/d.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/d.dir/build.make CMakeFiles/d.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/d.dir/main.cpp.o.provides

CMakeFiles/d.dir/main.cpp.o.provides.build: CMakeFiles/d.dir/main.cpp.o


CMakeFiles/d.dir/sayHello.cpp.o: CMakeFiles/d.dir/flags.make
CMakeFiles/d.dir/sayHello.cpp.o: ../sayHello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/d.dir/sayHello.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d.dir/sayHello.cpp.o -c /Users/hans/Code/Personal/c++/lab/one/d/sayHello.cpp

CMakeFiles/d.dir/sayHello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d.dir/sayHello.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hans/Code/Personal/c++/lab/one/d/sayHello.cpp > CMakeFiles/d.dir/sayHello.cpp.i

CMakeFiles/d.dir/sayHello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d.dir/sayHello.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hans/Code/Personal/c++/lab/one/d/sayHello.cpp -o CMakeFiles/d.dir/sayHello.cpp.s

CMakeFiles/d.dir/sayHello.cpp.o.requires:

.PHONY : CMakeFiles/d.dir/sayHello.cpp.o.requires

CMakeFiles/d.dir/sayHello.cpp.o.provides: CMakeFiles/d.dir/sayHello.cpp.o.requires
	$(MAKE) -f CMakeFiles/d.dir/build.make CMakeFiles/d.dir/sayHello.cpp.o.provides.build
.PHONY : CMakeFiles/d.dir/sayHello.cpp.o.provides

CMakeFiles/d.dir/sayHello.cpp.o.provides.build: CMakeFiles/d.dir/sayHello.cpp.o


CMakeFiles/d.dir/shouldSayHello.cpp.o: CMakeFiles/d.dir/flags.make
CMakeFiles/d.dir/shouldSayHello.cpp.o: ../shouldSayHello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/d.dir/shouldSayHello.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d.dir/shouldSayHello.cpp.o -c /Users/hans/Code/Personal/c++/lab/one/d/shouldSayHello.cpp

CMakeFiles/d.dir/shouldSayHello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d.dir/shouldSayHello.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hans/Code/Personal/c++/lab/one/d/shouldSayHello.cpp > CMakeFiles/d.dir/shouldSayHello.cpp.i

CMakeFiles/d.dir/shouldSayHello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d.dir/shouldSayHello.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hans/Code/Personal/c++/lab/one/d/shouldSayHello.cpp -o CMakeFiles/d.dir/shouldSayHello.cpp.s

CMakeFiles/d.dir/shouldSayHello.cpp.o.requires:

.PHONY : CMakeFiles/d.dir/shouldSayHello.cpp.o.requires

CMakeFiles/d.dir/shouldSayHello.cpp.o.provides: CMakeFiles/d.dir/shouldSayHello.cpp.o.requires
	$(MAKE) -f CMakeFiles/d.dir/build.make CMakeFiles/d.dir/shouldSayHello.cpp.o.provides.build
.PHONY : CMakeFiles/d.dir/shouldSayHello.cpp.o.provides

CMakeFiles/d.dir/shouldSayHello.cpp.o.provides.build: CMakeFiles/d.dir/shouldSayHello.cpp.o


# Object files for target d
d_OBJECTS = \
"CMakeFiles/d.dir/main.cpp.o" \
"CMakeFiles/d.dir/sayHello.cpp.o" \
"CMakeFiles/d.dir/shouldSayHello.cpp.o"

# External object files for target d
d_EXTERNAL_OBJECTS =

d : CMakeFiles/d.dir/main.cpp.o
d : CMakeFiles/d.dir/sayHello.cpp.o
d : CMakeFiles/d.dir/shouldSayHello.cpp.o
d : CMakeFiles/d.dir/build.make
d : CMakeFiles/d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable d"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/d.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/d.dir/build: d

.PHONY : CMakeFiles/d.dir/build

CMakeFiles/d.dir/requires: CMakeFiles/d.dir/main.cpp.o.requires
CMakeFiles/d.dir/requires: CMakeFiles/d.dir/sayHello.cpp.o.requires
CMakeFiles/d.dir/requires: CMakeFiles/d.dir/shouldSayHello.cpp.o.requires

.PHONY : CMakeFiles/d.dir/requires

CMakeFiles/d.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/d.dir/cmake_clean.cmake
.PHONY : CMakeFiles/d.dir/clean

CMakeFiles/d.dir/depend:
	cd /Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hans/Code/Personal/c++/lab/one/d /Users/hans/Code/Personal/c++/lab/one/d /Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug /Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug /Users/hans/Code/Personal/c++/lab/one/d/cmake-build-debug/CMakeFiles/d.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/d.dir/depend
