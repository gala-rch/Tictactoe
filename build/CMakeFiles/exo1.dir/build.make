# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Winlibs\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\Winlibs\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Gala\Documents\cours\prog\Tictactoe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gala\Documents\cours\prog\Tictactoe\build

# Include any dependencies generated for this target.
include CMakeFiles/exo1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exo1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exo1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exo1.dir/flags.make

CMakeFiles/exo1.dir/src/main.cpp.obj: CMakeFiles/exo1.dir/flags.make
CMakeFiles/exo1.dir/src/main.cpp.obj: C:/Users/Gala/Documents/cours/prog/Tictactoe/src/main.cpp
CMakeFiles/exo1.dir/src/main.cpp.obj: CMakeFiles/exo1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Gala\Documents\cours\prog\Tictactoe\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exo1.dir/src/main.cpp.obj"
	C:\Winlibs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exo1.dir/src/main.cpp.obj -MF CMakeFiles\exo1.dir\src\main.cpp.obj.d -o CMakeFiles\exo1.dir\src\main.cpp.obj -c C:\Users\Gala\Documents\cours\prog\Tictactoe\src\main.cpp

CMakeFiles/exo1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/exo1.dir/src/main.cpp.i"
	C:\Winlibs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gala\Documents\cours\prog\Tictactoe\src\main.cpp > CMakeFiles\exo1.dir\src\main.cpp.i

CMakeFiles/exo1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/exo1.dir/src/main.cpp.s"
	C:\Winlibs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gala\Documents\cours\prog\Tictactoe\src\main.cpp -o CMakeFiles\exo1.dir\src\main.cpp.s

# Object files for target exo1
exo1_OBJECTS = \
"CMakeFiles/exo1.dir/src/main.cpp.obj"

# External object files for target exo1
exo1_EXTERNAL_OBJECTS =

exo1.exe: CMakeFiles/exo1.dir/src/main.cpp.obj
exo1.exe: CMakeFiles/exo1.dir/build.make
exo1.exe: CMakeFiles/exo1.dir/linkLibs.rsp
exo1.exe: CMakeFiles/exo1.dir/objects1.rsp
exo1.exe: CMakeFiles/exo1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Gala\Documents\cours\prog\Tictactoe\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exo1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exo1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exo1.dir/build: exo1.exe
.PHONY : CMakeFiles/exo1.dir/build

CMakeFiles/exo1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exo1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exo1.dir/clean

CMakeFiles/exo1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gala\Documents\cours\prog\Tictactoe C:\Users\Gala\Documents\cours\prog\Tictactoe C:\Users\Gala\Documents\cours\prog\Tictactoe\build C:\Users\Gala\Documents\cours\prog\Tictactoe\build C:\Users\Gala\Documents\cours\prog\Tictactoe\build\CMakeFiles\exo1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/exo1.dir/depend

