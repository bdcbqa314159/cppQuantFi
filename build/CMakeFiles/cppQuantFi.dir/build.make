# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.20.5/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.20.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bernardocohen/repos/cppQuantFi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardocohen/repos/cppQuantFi/build

# Include any dependencies generated for this target.
include CMakeFiles/cppQuantFi.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cppQuantFi.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cppQuantFi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppQuantFi.dir/flags.make

CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o: ../cpp/src/intro.cpp
CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o -MF CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o.d -o CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/cpp/src/intro.cpp

CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/cpp/src/intro.cpp > CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.i

CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/cpp/src/intro.cpp -o CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.s

CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o: ../python/cppQuantFi.cpp
CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o -MF CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o.d -o CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/python/cppQuantFi.cpp

CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/python/cppQuantFi.cpp > CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.i

CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/python/cppQuantFi.cpp -o CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.s

CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o: ../python/cppqf.cpp
CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o -MF CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o.d -o CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/python/cppqf.cpp

CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/python/cppqf.cpp > CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.i

CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/python/cppqf.cpp -o CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.s

# Object files for target cppQuantFi
cppQuantFi_OBJECTS = \
"CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o" \
"CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o" \
"CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o"

# External object files for target cppQuantFi
cppQuantFi_EXTERNAL_OBJECTS =

cppQuantFi.cpython-38-darwin.so: CMakeFiles/cppQuantFi.dir/cpp/src/intro.cpp.o
cppQuantFi.cpython-38-darwin.so: CMakeFiles/cppQuantFi.dir/python/cppQuantFi.cpp.o
cppQuantFi.cpython-38-darwin.so: CMakeFiles/cppQuantFi.dir/python/cppqf.cpp.o
cppQuantFi.cpython-38-darwin.so: CMakeFiles/cppQuantFi.dir/build.make
cppQuantFi.cpython-38-darwin.so: CMakeFiles/cppQuantFi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardocohen/repos/cppQuantFi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared module cppQuantFi.cpython-38-darwin.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cppQuantFi.dir/link.txt --verbose=$(VERBOSE)
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip -x /Users/bernardocohen/repos/cppQuantFi/build/cppQuantFi.cpython-38-darwin.so

# Rule to build all files generated by this target.
CMakeFiles/cppQuantFi.dir/build: cppQuantFi.cpython-38-darwin.so
.PHONY : CMakeFiles/cppQuantFi.dir/build

CMakeFiles/cppQuantFi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cppQuantFi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cppQuantFi.dir/clean

CMakeFiles/cppQuantFi.dir/depend:
	cd /Users/bernardocohen/repos/cppQuantFi/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardocohen/repos/cppQuantFi /Users/bernardocohen/repos/cppQuantFi /Users/bernardocohen/repos/cppQuantFi/build /Users/bernardocohen/repos/cppQuantFi/build /Users/bernardocohen/repos/cppQuantFi/build/CMakeFiles/cppQuantFi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cppQuantFi.dir/depend

