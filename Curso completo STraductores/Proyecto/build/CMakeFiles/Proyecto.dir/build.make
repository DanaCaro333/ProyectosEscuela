# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/danacaro/Desktop/CUCEI/STraductores/Proyecto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build

# Include any dependencies generated for this target.
include CMakeFiles/Proyecto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Proyecto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proyecto.dir/flags.make

CMakeFiles/Proyecto.dir/main.cpp.o: CMakeFiles/Proyecto.dir/flags.make
CMakeFiles/Proyecto.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proyecto.dir/main.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto.dir/main.cpp.o -c /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/main.cpp

CMakeFiles/Proyecto.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto.dir/main.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/main.cpp > CMakeFiles/Proyecto.dir/main.cpp.i

CMakeFiles/Proyecto.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto.dir/main.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/main.cpp -o CMakeFiles/Proyecto.dir/main.cpp.s

CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.o: CMakeFiles/Proyecto.dir/flags.make
CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.o: ../AnalizadorSintactico.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.o -c /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/AnalizadorSintactico.cpp

CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/AnalizadorSintactico.cpp > CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.i

CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/AnalizadorSintactico.cpp -o CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.s

CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.o: CMakeFiles/Proyecto.dir/flags.make
CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.o: ../AnalizadorLexico.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.o -c /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/AnalizadorLexico.cpp

CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/AnalizadorLexico.cpp > CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.i

CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/AnalizadorLexico.cpp -o CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.s

CMakeFiles/Proyecto.dir/Hoja.cpp.o: CMakeFiles/Proyecto.dir/flags.make
CMakeFiles/Proyecto.dir/Hoja.cpp.o: ../Hoja.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Proyecto.dir/Hoja.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto.dir/Hoja.cpp.o -c /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/Hoja.cpp

CMakeFiles/Proyecto.dir/Hoja.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto.dir/Hoja.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/Hoja.cpp > CMakeFiles/Proyecto.dir/Hoja.cpp.i

CMakeFiles/Proyecto.dir/Hoja.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto.dir/Hoja.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/Hoja.cpp -o CMakeFiles/Proyecto.dir/Hoja.cpp.s

CMakeFiles/Proyecto.dir/Nodo.cpp.o: CMakeFiles/Proyecto.dir/flags.make
CMakeFiles/Proyecto.dir/Nodo.cpp.o: ../Nodo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Proyecto.dir/Nodo.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto.dir/Nodo.cpp.o -c /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/Nodo.cpp

CMakeFiles/Proyecto.dir/Nodo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto.dir/Nodo.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/Nodo.cpp > CMakeFiles/Proyecto.dir/Nodo.cpp.i

CMakeFiles/Proyecto.dir/Nodo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto.dir/Nodo.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/Nodo.cpp -o CMakeFiles/Proyecto.dir/Nodo.cpp.s

# Object files for target Proyecto
Proyecto_OBJECTS = \
"CMakeFiles/Proyecto.dir/main.cpp.o" \
"CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.o" \
"CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.o" \
"CMakeFiles/Proyecto.dir/Hoja.cpp.o" \
"CMakeFiles/Proyecto.dir/Nodo.cpp.o"

# External object files for target Proyecto
Proyecto_EXTERNAL_OBJECTS =

Proyecto: CMakeFiles/Proyecto.dir/main.cpp.o
Proyecto: CMakeFiles/Proyecto.dir/AnalizadorSintactico.cpp.o
Proyecto: CMakeFiles/Proyecto.dir/AnalizadorLexico.cpp.o
Proyecto: CMakeFiles/Proyecto.dir/Hoja.cpp.o
Proyecto: CMakeFiles/Proyecto.dir/Nodo.cpp.o
Proyecto: CMakeFiles/Proyecto.dir/build.make
Proyecto: CMakeFiles/Proyecto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Proyecto"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Proyecto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proyecto.dir/build: Proyecto

.PHONY : CMakeFiles/Proyecto.dir/build

CMakeFiles/Proyecto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Proyecto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Proyecto.dir/clean

CMakeFiles/Proyecto.dir/depend:
	cd /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/danacaro/Desktop/CUCEI/STraductores/Proyecto /home/danacaro/Desktop/CUCEI/STraductores/Proyecto /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build /home/danacaro/Desktop/CUCEI/STraductores/Proyecto/build/CMakeFiles/Proyecto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proyecto.dir/depend
