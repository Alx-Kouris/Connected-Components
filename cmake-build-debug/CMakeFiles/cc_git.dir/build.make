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
CMAKE_COMMAND = /opt/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex/cc.git

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/cc.git/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cc_git.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cc_git.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cc_git.dir/flags.make

CMakeFiles/cc_git.dir/main/graph.cpp.o: CMakeFiles/cc_git.dir/flags.make
CMakeFiles/cc_git.dir/main/graph.cpp.o: ../main/graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/cc.git/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cc_git.dir/main/graph.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cc_git.dir/main/graph.cpp.o -c /home/alex/cc.git/main/graph.cpp

CMakeFiles/cc_git.dir/main/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cc_git.dir/main/graph.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/cc.git/main/graph.cpp > CMakeFiles/cc_git.dir/main/graph.cpp.i

CMakeFiles/cc_git.dir/main/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cc_git.dir/main/graph.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/cc.git/main/graph.cpp -o CMakeFiles/cc_git.dir/main/graph.cpp.s

CMakeFiles/cc_git.dir/main/graph.cpp.o.requires:

.PHONY : CMakeFiles/cc_git.dir/main/graph.cpp.o.requires

CMakeFiles/cc_git.dir/main/graph.cpp.o.provides: CMakeFiles/cc_git.dir/main/graph.cpp.o.requires
	$(MAKE) -f CMakeFiles/cc_git.dir/build.make CMakeFiles/cc_git.dir/main/graph.cpp.o.provides.build
.PHONY : CMakeFiles/cc_git.dir/main/graph.cpp.o.provides

CMakeFiles/cc_git.dir/main/graph.cpp.o.provides.build: CMakeFiles/cc_git.dir/main/graph.cpp.o


CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o: CMakeFiles/cc_git.dir/flags.make
CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o: ../main/graph_dyn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/cc.git/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o -c /home/alex/cc.git/main/graph_dyn.cpp

CMakeFiles/cc_git.dir/main/graph_dyn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cc_git.dir/main/graph_dyn.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/cc.git/main/graph_dyn.cpp > CMakeFiles/cc_git.dir/main/graph_dyn.cpp.i

CMakeFiles/cc_git.dir/main/graph_dyn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cc_git.dir/main/graph_dyn.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/cc.git/main/graph_dyn.cpp -o CMakeFiles/cc_git.dir/main/graph_dyn.cpp.s

CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o.requires:

.PHONY : CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o.requires

CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o.provides: CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o.requires
	$(MAKE) -f CMakeFiles/cc_git.dir/build.make CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o.provides.build
.PHONY : CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o.provides

CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o.provides.build: CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o


CMakeFiles/cc_git.dir/main/main.cpp.o: CMakeFiles/cc_git.dir/flags.make
CMakeFiles/cc_git.dir/main/main.cpp.o: ../main/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/cc.git/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cc_git.dir/main/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cc_git.dir/main/main.cpp.o -c /home/alex/cc.git/main/main.cpp

CMakeFiles/cc_git.dir/main/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cc_git.dir/main/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/cc.git/main/main.cpp > CMakeFiles/cc_git.dir/main/main.cpp.i

CMakeFiles/cc_git.dir/main/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cc_git.dir/main/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/cc.git/main/main.cpp -o CMakeFiles/cc_git.dir/main/main.cpp.s

CMakeFiles/cc_git.dir/main/main.cpp.o.requires:

.PHONY : CMakeFiles/cc_git.dir/main/main.cpp.o.requires

CMakeFiles/cc_git.dir/main/main.cpp.o.provides: CMakeFiles/cc_git.dir/main/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cc_git.dir/build.make CMakeFiles/cc_git.dir/main/main.cpp.o.provides.build
.PHONY : CMakeFiles/cc_git.dir/main/main.cpp.o.provides

CMakeFiles/cc_git.dir/main/main.cpp.o.provides.build: CMakeFiles/cc_git.dir/main/main.cpp.o


CMakeFiles/cc_git.dir/main/reading.cpp.o: CMakeFiles/cc_git.dir/flags.make
CMakeFiles/cc_git.dir/main/reading.cpp.o: ../main/reading.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/cc.git/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cc_git.dir/main/reading.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cc_git.dir/main/reading.cpp.o -c /home/alex/cc.git/main/reading.cpp

CMakeFiles/cc_git.dir/main/reading.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cc_git.dir/main/reading.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/cc.git/main/reading.cpp > CMakeFiles/cc_git.dir/main/reading.cpp.i

CMakeFiles/cc_git.dir/main/reading.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cc_git.dir/main/reading.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/cc.git/main/reading.cpp -o CMakeFiles/cc_git.dir/main/reading.cpp.s

CMakeFiles/cc_git.dir/main/reading.cpp.o.requires:

.PHONY : CMakeFiles/cc_git.dir/main/reading.cpp.o.requires

CMakeFiles/cc_git.dir/main/reading.cpp.o.provides: CMakeFiles/cc_git.dir/main/reading.cpp.o.requires
	$(MAKE) -f CMakeFiles/cc_git.dir/build.make CMakeFiles/cc_git.dir/main/reading.cpp.o.provides.build
.PHONY : CMakeFiles/cc_git.dir/main/reading.cpp.o.provides

CMakeFiles/cc_git.dir/main/reading.cpp.o.provides.build: CMakeFiles/cc_git.dir/main/reading.cpp.o


CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o: CMakeFiles/cc_git.dir/flags.make
CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o: ../main/shiloach_dynamic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/cc.git/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o -c /home/alex/cc.git/main/shiloach_dynamic.cpp

CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/cc.git/main/shiloach_dynamic.cpp > CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.i

CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/cc.git/main/shiloach_dynamic.cpp -o CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.s

CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o.requires:

.PHONY : CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o.requires

CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o.provides: CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o.requires
	$(MAKE) -f CMakeFiles/cc_git.dir/build.make CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o.provides.build
.PHONY : CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o.provides

CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o.provides.build: CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o


CMakeFiles/cc_git.dir/main/shiloach.cpp.o: CMakeFiles/cc_git.dir/flags.make
CMakeFiles/cc_git.dir/main/shiloach.cpp.o: ../main/shiloach.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/cc.git/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cc_git.dir/main/shiloach.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cc_git.dir/main/shiloach.cpp.o -c /home/alex/cc.git/main/shiloach.cpp

CMakeFiles/cc_git.dir/main/shiloach.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cc_git.dir/main/shiloach.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/cc.git/main/shiloach.cpp > CMakeFiles/cc_git.dir/main/shiloach.cpp.i

CMakeFiles/cc_git.dir/main/shiloach.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cc_git.dir/main/shiloach.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/cc.git/main/shiloach.cpp -o CMakeFiles/cc_git.dir/main/shiloach.cpp.s

CMakeFiles/cc_git.dir/main/shiloach.cpp.o.requires:

.PHONY : CMakeFiles/cc_git.dir/main/shiloach.cpp.o.requires

CMakeFiles/cc_git.dir/main/shiloach.cpp.o.provides: CMakeFiles/cc_git.dir/main/shiloach.cpp.o.requires
	$(MAKE) -f CMakeFiles/cc_git.dir/build.make CMakeFiles/cc_git.dir/main/shiloach.cpp.o.provides.build
.PHONY : CMakeFiles/cc_git.dir/main/shiloach.cpp.o.provides

CMakeFiles/cc_git.dir/main/shiloach.cpp.o.provides.build: CMakeFiles/cc_git.dir/main/shiloach.cpp.o


# Object files for target cc_git
cc_git_OBJECTS = \
"CMakeFiles/cc_git.dir/main/graph.cpp.o" \
"CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o" \
"CMakeFiles/cc_git.dir/main/main.cpp.o" \
"CMakeFiles/cc_git.dir/main/reading.cpp.o" \
"CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o" \
"CMakeFiles/cc_git.dir/main/shiloach.cpp.o"

# External object files for target cc_git
cc_git_EXTERNAL_OBJECTS =

cc_git: CMakeFiles/cc_git.dir/main/graph.cpp.o
cc_git: CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o
cc_git: CMakeFiles/cc_git.dir/main/main.cpp.o
cc_git: CMakeFiles/cc_git.dir/main/reading.cpp.o
cc_git: CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o
cc_git: CMakeFiles/cc_git.dir/main/shiloach.cpp.o
cc_git: CMakeFiles/cc_git.dir/build.make
cc_git: CMakeFiles/cc_git.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/cc.git/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable cc_git"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cc_git.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cc_git.dir/build: cc_git

.PHONY : CMakeFiles/cc_git.dir/build

CMakeFiles/cc_git.dir/requires: CMakeFiles/cc_git.dir/main/graph.cpp.o.requires
CMakeFiles/cc_git.dir/requires: CMakeFiles/cc_git.dir/main/graph_dyn.cpp.o.requires
CMakeFiles/cc_git.dir/requires: CMakeFiles/cc_git.dir/main/main.cpp.o.requires
CMakeFiles/cc_git.dir/requires: CMakeFiles/cc_git.dir/main/reading.cpp.o.requires
CMakeFiles/cc_git.dir/requires: CMakeFiles/cc_git.dir/main/shiloach_dynamic.cpp.o.requires
CMakeFiles/cc_git.dir/requires: CMakeFiles/cc_git.dir/main/shiloach.cpp.o.requires

.PHONY : CMakeFiles/cc_git.dir/requires

CMakeFiles/cc_git.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cc_git.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cc_git.dir/clean

CMakeFiles/cc_git.dir/depend:
	cd /home/alex/cc.git/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/cc.git /home/alex/cc.git /home/alex/cc.git/cmake-build-debug /home/alex/cc.git/cmake-build-debug /home/alex/cc.git/cmake-build-debug/CMakeFiles/cc_git.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cc_git.dir/depend

