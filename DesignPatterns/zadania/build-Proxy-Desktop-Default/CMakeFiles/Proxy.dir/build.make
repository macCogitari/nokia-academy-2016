# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default

# Include any dependencies generated for this target.
include CMakeFiles/Proxy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Proxy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proxy.dir/flags.make

CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o: CMakeFiles/Proxy.dir/flags.make
CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o: /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/HeavyClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o -c /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/HeavyClass.cpp

CMakeFiles/Proxy.dir/src/HeavyClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proxy.dir/src/HeavyClass.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/HeavyClass.cpp > CMakeFiles/Proxy.dir/src/HeavyClass.cpp.i

CMakeFiles/Proxy.dir/src/HeavyClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proxy.dir/src/HeavyClass.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/HeavyClass.cpp -o CMakeFiles/Proxy.dir/src/HeavyClass.cpp.s

CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o.requires:

.PHONY : CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o.requires

CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o.provides: CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o.requires
	$(MAKE) -f CMakeFiles/Proxy.dir/build.make CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o.provides.build
.PHONY : CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o.provides

CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o.provides.build: CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o


CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o: CMakeFiles/Proxy.dir/flags.make
CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o: /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/ThrowingFunction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o -c /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/ThrowingFunction.cpp

CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/ThrowingFunction.cpp > CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.i

CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/ThrowingFunction.cpp -o CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.s

CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o.requires:

.PHONY : CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o.requires

CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o.provides: CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o.requires
	$(MAKE) -f CMakeFiles/Proxy.dir/build.make CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o.provides.build
.PHONY : CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o.provides

CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o.provides.build: CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o


CMakeFiles/Proxy.dir/src/main.cpp.o: CMakeFiles/Proxy.dir/flags.make
CMakeFiles/Proxy.dir/src/main.cpp.o: /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Proxy.dir/src/main.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proxy.dir/src/main.cpp.o -c /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/main.cpp

CMakeFiles/Proxy.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proxy.dir/src/main.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/main.cpp > CMakeFiles/Proxy.dir/src/main.cpp.i

CMakeFiles/Proxy.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proxy.dir/src/main.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy/src/main.cpp -o CMakeFiles/Proxy.dir/src/main.cpp.s

CMakeFiles/Proxy.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/Proxy.dir/src/main.cpp.o.requires

CMakeFiles/Proxy.dir/src/main.cpp.o.provides: CMakeFiles/Proxy.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Proxy.dir/build.make CMakeFiles/Proxy.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/Proxy.dir/src/main.cpp.o.provides

CMakeFiles/Proxy.dir/src/main.cpp.o.provides.build: CMakeFiles/Proxy.dir/src/main.cpp.o


# Object files for target Proxy
Proxy_OBJECTS = \
"CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o" \
"CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o" \
"CMakeFiles/Proxy.dir/src/main.cpp.o"

# External object files for target Proxy
Proxy_EXTERNAL_OBJECTS =

Proxy: CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o
Proxy: CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o
Proxy: CMakeFiles/Proxy.dir/src/main.cpp.o
Proxy: CMakeFiles/Proxy.dir/build.make
Proxy: CMakeFiles/Proxy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Proxy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Proxy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proxy.dir/build: Proxy

.PHONY : CMakeFiles/Proxy.dir/build

CMakeFiles/Proxy.dir/requires: CMakeFiles/Proxy.dir/src/HeavyClass.cpp.o.requires
CMakeFiles/Proxy.dir/requires: CMakeFiles/Proxy.dir/src/ThrowingFunction.cpp.o.requires
CMakeFiles/Proxy.dir/requires: CMakeFiles/Proxy.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/Proxy.dir/requires

CMakeFiles/Proxy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Proxy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Proxy.dir/clean

CMakeFiles/Proxy.dir/depend:
	cd /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/Proxy /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-Proxy-Desktop-Default/CMakeFiles/Proxy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proxy.dir/depend
