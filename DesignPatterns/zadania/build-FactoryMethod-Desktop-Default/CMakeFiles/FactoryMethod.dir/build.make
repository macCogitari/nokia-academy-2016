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
CMAKE_SOURCE_DIR = /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default

# Include any dependencies generated for this target.
include CMakeFiles/FactoryMethod.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FactoryMethod.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FactoryMethod.dir/flags.make

CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o: CMakeFiles/FactoryMethod.dir/flags.make
CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o: /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/GsmPhone.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o -c /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/GsmPhone.cpp

CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/GsmPhone.cpp > CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.i

CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/GsmPhone.cpp -o CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.s

CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o.requires:

.PHONY : CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o.requires

CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o.provides: CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o.requires
	$(MAKE) -f CMakeFiles/FactoryMethod.dir/build.make CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o.provides.build
.PHONY : CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o.provides

CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o.provides.build: CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o


CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o: CMakeFiles/FactoryMethod.dir/flags.make
CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o: /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/LtePhone.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o -c /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/LtePhone.cpp

CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/LtePhone.cpp > CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.i

CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/LtePhone.cpp -o CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.s

CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o.requires:

.PHONY : CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o.requires

CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o.provides: CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o.requires
	$(MAKE) -f CMakeFiles/FactoryMethod.dir/build.make CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o.provides.build
.PHONY : CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o.provides

CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o.provides.build: CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o


CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o: CMakeFiles/FactoryMethod.dir/flags.make
CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o: /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/WcdmaPhone.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o -c /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/WcdmaPhone.cpp

CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/WcdmaPhone.cpp > CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.i

CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/WcdmaPhone.cpp -o CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.s

CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o.requires:

.PHONY : CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o.requires

CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o.provides: CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o.requires
	$(MAKE) -f CMakeFiles/FactoryMethod.dir/build.make CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o.provides.build
.PHONY : CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o.provides

CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o.provides.build: CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o


CMakeFiles/FactoryMethod.dir/src/main.cpp.o: CMakeFiles/FactoryMethod.dir/flags.make
CMakeFiles/FactoryMethod.dir/src/main.cpp.o: /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FactoryMethod.dir/src/main.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FactoryMethod.dir/src/main.cpp.o -c /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/main.cpp

CMakeFiles/FactoryMethod.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FactoryMethod.dir/src/main.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/main.cpp > CMakeFiles/FactoryMethod.dir/src/main.cpp.i

CMakeFiles/FactoryMethod.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FactoryMethod.dir/src/main.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod/src/main.cpp -o CMakeFiles/FactoryMethod.dir/src/main.cpp.s

CMakeFiles/FactoryMethod.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/FactoryMethod.dir/src/main.cpp.o.requires

CMakeFiles/FactoryMethod.dir/src/main.cpp.o.provides: CMakeFiles/FactoryMethod.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/FactoryMethod.dir/build.make CMakeFiles/FactoryMethod.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/FactoryMethod.dir/src/main.cpp.o.provides

CMakeFiles/FactoryMethod.dir/src/main.cpp.o.provides.build: CMakeFiles/FactoryMethod.dir/src/main.cpp.o


# Object files for target FactoryMethod
FactoryMethod_OBJECTS = \
"CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o" \
"CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o" \
"CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o" \
"CMakeFiles/FactoryMethod.dir/src/main.cpp.o"

# External object files for target FactoryMethod
FactoryMethod_EXTERNAL_OBJECTS =

FactoryMethod: CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o
FactoryMethod: CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o
FactoryMethod: CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o
FactoryMethod: CMakeFiles/FactoryMethod.dir/src/main.cpp.o
FactoryMethod: CMakeFiles/FactoryMethod.dir/build.make
FactoryMethod: CMakeFiles/FactoryMethod.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable FactoryMethod"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FactoryMethod.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FactoryMethod.dir/build: FactoryMethod

.PHONY : CMakeFiles/FactoryMethod.dir/build

CMakeFiles/FactoryMethod.dir/requires: CMakeFiles/FactoryMethod.dir/src/GsmPhone.cpp.o.requires
CMakeFiles/FactoryMethod.dir/requires: CMakeFiles/FactoryMethod.dir/src/LtePhone.cpp.o.requires
CMakeFiles/FactoryMethod.dir/requires: CMakeFiles/FactoryMethod.dir/src/WcdmaPhone.cpp.o.requires
CMakeFiles/FactoryMethod.dir/requires: CMakeFiles/FactoryMethod.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/FactoryMethod.dir/requires

CMakeFiles/FactoryMethod.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FactoryMethod.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FactoryMethod.dir/clean

CMakeFiles/FactoryMethod.dir/depend:
	cd /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/FactoryMethod /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default /home/mtrojnar/na/NAfork/nokia-academy-2016/DesignPatterns/zadania/build-FactoryMethod-Desktop-Default/CMakeFiles/FactoryMethod.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FactoryMethod.dir/depend

