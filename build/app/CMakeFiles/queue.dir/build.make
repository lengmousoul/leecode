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
include app/CMakeFiles/queue.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/queue.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/queue.dir/flags.make

app/CMakeFiles/queue.dir/queue.c.obj: app/CMakeFiles/queue.dir/flags.make
app/CMakeFiles/queue.dir/queue.c.obj: app/CMakeFiles/queue.dir/includes_C.rsp
app/CMakeFiles/queue.dir/queue.c.obj: ../app/queue.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\leecode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object app/CMakeFiles/queue.dir/queue.c.obj"
	cd /d D:\Desktop\leecode\build\app && D:\code_configuration\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\queue.dir\queue.c.obj   -c D:\Desktop\leecode\app\queue.c

app/CMakeFiles/queue.dir/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/queue.dir/queue.c.i"
	cd /d D:\Desktop\leecode\build\app && D:\code_configuration\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Desktop\leecode\app\queue.c > CMakeFiles\queue.dir\queue.c.i

app/CMakeFiles/queue.dir/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/queue.dir/queue.c.s"
	cd /d D:\Desktop\leecode\build\app && D:\code_configuration\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Desktop\leecode\app\queue.c -o CMakeFiles\queue.dir\queue.c.s

# Object files for target queue
queue_OBJECTS = \
"CMakeFiles/queue.dir/queue.c.obj"

# External object files for target queue
queue_EXTERNAL_OBJECTS =

app/libqueue.a: app/CMakeFiles/queue.dir/queue.c.obj
app/libqueue.a: app/CMakeFiles/queue.dir/build.make
app/libqueue.a: app/CMakeFiles/queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\leecode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libqueue.a"
	cd /d D:\Desktop\leecode\build\app && $(CMAKE_COMMAND) -P CMakeFiles\queue.dir\cmake_clean_target.cmake
	cd /d D:\Desktop\leecode\build\app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\queue.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/queue.dir/build: app/libqueue.a

.PHONY : app/CMakeFiles/queue.dir/build

app/CMakeFiles/queue.dir/clean:
	cd /d D:\Desktop\leecode\build\app && $(CMAKE_COMMAND) -P CMakeFiles\queue.dir\cmake_clean.cmake
.PHONY : app/CMakeFiles/queue.dir/clean

app/CMakeFiles/queue.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\leecode D:\Desktop\leecode\app D:\Desktop\leecode\build D:\Desktop\leecode\build\app D:\Desktop\leecode\build\app\CMakeFiles\queue.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/queue.dir/depend

