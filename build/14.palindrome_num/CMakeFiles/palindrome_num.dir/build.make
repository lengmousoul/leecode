# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\code_configuration\cmake-3.17.0-rc3-win64-x64\bin\cmake.exe

# The command to remove a file.
RM = D:\code_configuration\cmake-3.17.0-rc3-win64-x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Desktop\leecode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Desktop\leecode\build

# Include any dependencies generated for this target.
include 14.palindrome_num/CMakeFiles/palindrome_num.dir/depend.make

# Include the progress variables for this target.
include 14.palindrome_num/CMakeFiles/palindrome_num.dir/progress.make

# Include the compile flags for this target's objects.
include 14.palindrome_num/CMakeFiles/palindrome_num.dir/flags.make

14.palindrome_num/CMakeFiles/palindrome_num.dir/palindrome_num.cpp.obj: 14.palindrome_num/CMakeFiles/palindrome_num.dir/flags.make
14.palindrome_num/CMakeFiles/palindrome_num.dir/palindrome_num.cpp.obj: 14.palindrome_num/CMakeFiles/palindrome_num.dir/includes_CXX.rsp
14.palindrome_num/CMakeFiles/palindrome_num.dir/palindrome_num.cpp.obj: ../14.palindrome_num/palindrome_num.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\leecode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 14.palindrome_num/CMakeFiles/palindrome_num.dir/palindrome_num.cpp.obj"
	cd /d D:\Desktop\leecode\build\14.palindrome_num && D:\code_configuration\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\palindrome_num.dir\palindrome_num.cpp.obj -c D:\Desktop\leecode\14.palindrome_num\palindrome_num.cpp

14.palindrome_num/CMakeFiles/palindrome_num.dir/palindrome_num.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/palindrome_num.dir/palindrome_num.cpp.i"
	cd /d D:\Desktop\leecode\build\14.palindrome_num && D:\code_configuration\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\leecode\14.palindrome_num\palindrome_num.cpp > CMakeFiles\palindrome_num.dir\palindrome_num.cpp.i

14.palindrome_num/CMakeFiles/palindrome_num.dir/palindrome_num.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/palindrome_num.dir/palindrome_num.cpp.s"
	cd /d D:\Desktop\leecode\build\14.palindrome_num && D:\code_configuration\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\leecode\14.palindrome_num\palindrome_num.cpp -o CMakeFiles\palindrome_num.dir\palindrome_num.cpp.s

# Object files for target palindrome_num
palindrome_num_OBJECTS = \
"CMakeFiles/palindrome_num.dir/palindrome_num.cpp.obj"

# External object files for target palindrome_num
palindrome_num_EXTERNAL_OBJECTS =

14.palindrome_num/palindrome_num.exe: 14.palindrome_num/CMakeFiles/palindrome_num.dir/palindrome_num.cpp.obj
14.palindrome_num/palindrome_num.exe: 14.palindrome_num/CMakeFiles/palindrome_num.dir/build.make
14.palindrome_num/palindrome_num.exe: 14.palindrome_num/CMakeFiles/palindrome_num.dir/linklibs.rsp
14.palindrome_num/palindrome_num.exe: 14.palindrome_num/CMakeFiles/palindrome_num.dir/objects1.rsp
14.palindrome_num/palindrome_num.exe: 14.palindrome_num/CMakeFiles/palindrome_num.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\leecode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable palindrome_num.exe"
	cd /d D:\Desktop\leecode\build\14.palindrome_num && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\palindrome_num.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
14.palindrome_num/CMakeFiles/palindrome_num.dir/build: 14.palindrome_num/palindrome_num.exe

.PHONY : 14.palindrome_num/CMakeFiles/palindrome_num.dir/build

14.palindrome_num/CMakeFiles/palindrome_num.dir/clean:
	cd /d D:\Desktop\leecode\build\14.palindrome_num && $(CMAKE_COMMAND) -P CMakeFiles\palindrome_num.dir\cmake_clean.cmake
.PHONY : 14.palindrome_num/CMakeFiles/palindrome_num.dir/clean

14.palindrome_num/CMakeFiles/palindrome_num.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\leecode D:\Desktop\leecode\14.palindrome_num D:\Desktop\leecode\build D:\Desktop\leecode\build\14.palindrome_num D:\Desktop\leecode\build\14.palindrome_num\CMakeFiles\palindrome_num.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 14.palindrome_num/CMakeFiles/palindrome_num.dir/depend
