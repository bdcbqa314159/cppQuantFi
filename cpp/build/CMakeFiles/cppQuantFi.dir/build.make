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
CMAKE_SOURCE_DIR = /Users/bernardocohen/repos/cppQuantFi/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardocohen/repos/cppQuantFi/cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/cppQuantFi.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cppQuantFi.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cppQuantFi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppQuantFi.dir/flags.make

CMakeFiles/cppQuantFi.dir/src/intro.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/src/intro.cpp.o: ../src/intro.cpp
CMakeFiles/cppQuantFi.dir/src/intro.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppQuantFi.dir/src/intro.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/src/intro.cpp.o -MF CMakeFiles/cppQuantFi.dir/src/intro.cpp.o.d -o CMakeFiles/cppQuantFi.dir/src/intro.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/cpp/src/intro.cpp

CMakeFiles/cppQuantFi.dir/src/intro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/src/intro.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/cpp/src/intro.cpp > CMakeFiles/cppQuantFi.dir/src/intro.cpp.i

CMakeFiles/cppQuantFi.dir/src/intro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/src/intro.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/cpp/src/intro.cpp -o CMakeFiles/cppQuantFi.dir/src/intro.cpp.s

CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o: ../src/vanillaOption.cpp
CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o -MF CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o.d -o CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/cpp/src/vanillaOption.cpp

CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/cpp/src/vanillaOption.cpp > CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.i

CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/cpp/src/vanillaOption.cpp -o CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.s

CMakeFiles/cppQuantFi.dir/src/norm.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/src/norm.cpp.o: ../src/norm.cpp
CMakeFiles/cppQuantFi.dir/src/norm.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cppQuantFi.dir/src/norm.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/src/norm.cpp.o -MF CMakeFiles/cppQuantFi.dir/src/norm.cpp.o.d -o CMakeFiles/cppQuantFi.dir/src/norm.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/cpp/src/norm.cpp

CMakeFiles/cppQuantFi.dir/src/norm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/src/norm.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/cpp/src/norm.cpp > CMakeFiles/cppQuantFi.dir/src/norm.cpp.i

CMakeFiles/cppQuantFi.dir/src/norm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/src/norm.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/cpp/src/norm.cpp -o CMakeFiles/cppQuantFi.dir/src/norm.cpp.s

CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o: ../src/payoffCall.cpp
CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o -MF CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o.d -o CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffCall.cpp

CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffCall.cpp > CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.i

CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffCall.cpp -o CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.s

CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o: ../src/payoffPut.cpp
CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o -MF CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o.d -o CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffPut.cpp

CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffPut.cpp > CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.i

CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffPut.cpp -o CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.s

CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o: ../src/payoffDoubleDigital.cpp
CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o -MF CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o.d -o CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffDoubleDigital.cpp

CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffDoubleDigital.cpp > CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.i

CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/cpp/src/payoffDoubleDigital.cpp -o CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.s

CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o: CMakeFiles/cppQuantFi.dir/flags.make
CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o: ../src/thomasAlgorithm.cpp
CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o: CMakeFiles/cppQuantFi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o -MF CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o.d -o CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o -c /Users/bernardocohen/repos/cppQuantFi/cpp/src/thomasAlgorithm.cpp

CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/cppQuantFi/cpp/src/thomasAlgorithm.cpp > CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.i

CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/cppQuantFi/cpp/src/thomasAlgorithm.cpp -o CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.s

# Object files for target cppQuantFi
cppQuantFi_OBJECTS = \
"CMakeFiles/cppQuantFi.dir/src/intro.cpp.o" \
"CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o" \
"CMakeFiles/cppQuantFi.dir/src/norm.cpp.o" \
"CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o" \
"CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o" \
"CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o" \
"CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o"

# External object files for target cppQuantFi
cppQuantFi_EXTERNAL_OBJECTS =

libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/src/intro.cpp.o
libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/src/vanillaOption.cpp.o
libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/src/norm.cpp.o
libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/src/payoffCall.cpp.o
libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/src/payoffPut.cpp.o
libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/src/payoffDoubleDigital.cpp.o
libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/src/thomasAlgorithm.cpp.o
libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/build.make
libcppQuantFi.dylib: CMakeFiles/cppQuantFi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX shared library libcppQuantFi.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cppQuantFi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cppQuantFi.dir/build: libcppQuantFi.dylib
.PHONY : CMakeFiles/cppQuantFi.dir/build

CMakeFiles/cppQuantFi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cppQuantFi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cppQuantFi.dir/clean

CMakeFiles/cppQuantFi.dir/depend:
	cd /Users/bernardocohen/repos/cppQuantFi/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardocohen/repos/cppQuantFi/cpp /Users/bernardocohen/repos/cppQuantFi/cpp /Users/bernardocohen/repos/cppQuantFi/cpp/build /Users/bernardocohen/repos/cppQuantFi/cpp/build /Users/bernardocohen/repos/cppQuantFi/cpp/build/CMakeFiles/cppQuantFi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cppQuantFi.dir/depend

