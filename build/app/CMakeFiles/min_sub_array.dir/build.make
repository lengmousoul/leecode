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
include app/CMakeFiles/min_sub_array.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/min_sub_array.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/min_sub_array.dir/flags.make

app/CMakeFiles/min_sub_array.dir/min_sub_array.c.obj: app/CMakeFiles/min_sub_array.dir/flags.make
app/CMakeFiles/min_sub_array.dir/min_sub_array.c.obj: app/CMakeFiles/min_sub_array.dir/includes_C.rsp
app/CMakeFiles/min_sub_array.dir/min_sub_array.c.obj: ../app/min_sub_array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\leecode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object app/CMakeFiles/min_sub_array.dir/min_sub_array.c.obj"
	cd /d D:\Desktop\leecode\build\app && D:\code_configuration\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\min_sub_array.dir\min_sub_array.c.obj   -c D:\Desktop\leecode\app\min_sub_array.c

app/CMakeFiles/min_sub_array.dir/min_sub_array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/min_sub_array.dir/min_sub_array.c.i"
	cd /d D:\Desktop\leecode\build\app && D:\code_configuration\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Desktop\leecode\app\min_sub_array.c > CMakeFiles\min_sub_array.dir\min_sub_array.c.i

app/CMakeFiles/min_sub_array.dir/min_sub_array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/min_sub_array.dir/min_sub_array.c.s"
	cd /d D:\Desktop\leecode\build\app && D:\code_configuration\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Desktop\leecode\app\min_sub_array.c -o CMakeFiles\min_sub_array.dir\min_sub_array.c.s

# Object files for target min_sub_array
min_sub_array_OBJECTS = \
"CMakeFiles/min_sub_array.dir/min_sub_array.c.obj"

# External object files for target min_sub_array
min_sub_array_EXTERNAL_OBJECTS =

app/libmin_sub_array.a: app/CMakeFiles/min_sub_array.dir/min_sub_array.c.obj
app/libmin_sub_array.a: app/CMakeFiles/min_sub_array.dir/build.make
app/libmin_sub_array.a: app/CMakeFiles/min_sub_array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\leecode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libmin_sub_array.a"
	cd /d D:\Desktop\leecode\build\app && $(CMAKE_COMMAND) -P CMakeFiles\min_sub_array.dir\cmake_clean_target.cmake
	cd /d D:\Desktop\leecode\build\app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\min_sub_array.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/min_sub_array.dir/build: app/libmin_sub_array.a

.PHONY : app/CMakeFiles/min_sub_array.dir/build

app/CMakeFiles/min_sub_array.dir/clean:
	cd /d D:\Desktop\leecode\build\app && $(CMAKE_COMMAND) -P CMakeFiles\min_sub_array.dir\cmake_clean.cmake
.PHONY : app/CMakeFiles/min_sub_array.dir/clean

app/CMakeFiles/min_sub_array.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\leecode D:\Desktop\leecode\app D:\Desktop\leecode\build D:\Desktop\leecode\build\app D:\Desktop\leecode\build\app\CMakeFiles\min_sub_array.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/min_sub_array.dir/depend
