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
CMAKE_SOURCE_DIR = "/home/gustavobiz/aaa5 semestre/T3-Concordo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/gustavobiz/aaa5 semestre/T3-Concordo/build"

# Include any dependencies generated for this target.
include CMakeFiles/concordo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/concordo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/concordo.dir/flags.make

CMakeFiles/concordo.dir/src/main.cpp.o: CMakeFiles/concordo.dir/flags.make
CMakeFiles/concordo.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/concordo.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/concordo.dir/src/main.cpp.o -c "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/main.cpp"

CMakeFiles/concordo.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concordo.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/main.cpp" > CMakeFiles/concordo.dir/src/main.cpp.i

CMakeFiles/concordo.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concordo.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/main.cpp" -o CMakeFiles/concordo.dir/src/main.cpp.s

CMakeFiles/concordo.dir/src/canal.cpp.o: CMakeFiles/concordo.dir/flags.make
CMakeFiles/concordo.dir/src/canal.cpp.o: ../src/canal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/concordo.dir/src/canal.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/concordo.dir/src/canal.cpp.o -c "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canal.cpp"

CMakeFiles/concordo.dir/src/canal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concordo.dir/src/canal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canal.cpp" > CMakeFiles/concordo.dir/src/canal.cpp.i

CMakeFiles/concordo.dir/src/canal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concordo.dir/src/canal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canal.cpp" -o CMakeFiles/concordo.dir/src/canal.cpp.s

CMakeFiles/concordo.dir/src/canalTexto.cpp.o: CMakeFiles/concordo.dir/flags.make
CMakeFiles/concordo.dir/src/canalTexto.cpp.o: ../src/canalTexto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/concordo.dir/src/canalTexto.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/concordo.dir/src/canalTexto.cpp.o -c "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canalTexto.cpp"

CMakeFiles/concordo.dir/src/canalTexto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concordo.dir/src/canalTexto.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canalTexto.cpp" > CMakeFiles/concordo.dir/src/canalTexto.cpp.i

CMakeFiles/concordo.dir/src/canalTexto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concordo.dir/src/canalTexto.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canalTexto.cpp" -o CMakeFiles/concordo.dir/src/canalTexto.cpp.s

CMakeFiles/concordo.dir/src/canalVoz.cpp.o: CMakeFiles/concordo.dir/flags.make
CMakeFiles/concordo.dir/src/canalVoz.cpp.o: ../src/canalVoz.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/concordo.dir/src/canalVoz.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/concordo.dir/src/canalVoz.cpp.o -c "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canalVoz.cpp"

CMakeFiles/concordo.dir/src/canalVoz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concordo.dir/src/canalVoz.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canalVoz.cpp" > CMakeFiles/concordo.dir/src/canalVoz.cpp.i

CMakeFiles/concordo.dir/src/canalVoz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concordo.dir/src/canalVoz.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/canalVoz.cpp" -o CMakeFiles/concordo.dir/src/canalVoz.cpp.s

CMakeFiles/concordo.dir/src/mensagem.cpp.o: CMakeFiles/concordo.dir/flags.make
CMakeFiles/concordo.dir/src/mensagem.cpp.o: ../src/mensagem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/concordo.dir/src/mensagem.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/concordo.dir/src/mensagem.cpp.o -c "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/mensagem.cpp"

CMakeFiles/concordo.dir/src/mensagem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concordo.dir/src/mensagem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/mensagem.cpp" > CMakeFiles/concordo.dir/src/mensagem.cpp.i

CMakeFiles/concordo.dir/src/mensagem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concordo.dir/src/mensagem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/mensagem.cpp" -o CMakeFiles/concordo.dir/src/mensagem.cpp.s

CMakeFiles/concordo.dir/src/sistema.cpp.o: CMakeFiles/concordo.dir/flags.make
CMakeFiles/concordo.dir/src/sistema.cpp.o: ../src/sistema.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/concordo.dir/src/sistema.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/concordo.dir/src/sistema.cpp.o -c "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/sistema.cpp"

CMakeFiles/concordo.dir/src/sistema.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concordo.dir/src/sistema.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/sistema.cpp" > CMakeFiles/concordo.dir/src/sistema.cpp.i

CMakeFiles/concordo.dir/src/sistema.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concordo.dir/src/sistema.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/sistema.cpp" -o CMakeFiles/concordo.dir/src/sistema.cpp.s

CMakeFiles/concordo.dir/src/servidor.cpp.o: CMakeFiles/concordo.dir/flags.make
CMakeFiles/concordo.dir/src/servidor.cpp.o: ../src/servidor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/concordo.dir/src/servidor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/concordo.dir/src/servidor.cpp.o -c "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/servidor.cpp"

CMakeFiles/concordo.dir/src/servidor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concordo.dir/src/servidor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/servidor.cpp" > CMakeFiles/concordo.dir/src/servidor.cpp.i

CMakeFiles/concordo.dir/src/servidor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concordo.dir/src/servidor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/servidor.cpp" -o CMakeFiles/concordo.dir/src/servidor.cpp.s

CMakeFiles/concordo.dir/src/usuario.cpp.o: CMakeFiles/concordo.dir/flags.make
CMakeFiles/concordo.dir/src/usuario.cpp.o: ../src/usuario.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/concordo.dir/src/usuario.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/concordo.dir/src/usuario.cpp.o -c "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/usuario.cpp"

CMakeFiles/concordo.dir/src/usuario.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concordo.dir/src/usuario.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/usuario.cpp" > CMakeFiles/concordo.dir/src/usuario.cpp.i

CMakeFiles/concordo.dir/src/usuario.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concordo.dir/src/usuario.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavobiz/aaa5 semestre/T3-Concordo/src/usuario.cpp" -o CMakeFiles/concordo.dir/src/usuario.cpp.s

# Object files for target concordo
concordo_OBJECTS = \
"CMakeFiles/concordo.dir/src/main.cpp.o" \
"CMakeFiles/concordo.dir/src/canal.cpp.o" \
"CMakeFiles/concordo.dir/src/canalTexto.cpp.o" \
"CMakeFiles/concordo.dir/src/canalVoz.cpp.o" \
"CMakeFiles/concordo.dir/src/mensagem.cpp.o" \
"CMakeFiles/concordo.dir/src/sistema.cpp.o" \
"CMakeFiles/concordo.dir/src/servidor.cpp.o" \
"CMakeFiles/concordo.dir/src/usuario.cpp.o"

# External object files for target concordo
concordo_EXTERNAL_OBJECTS =

concordo: CMakeFiles/concordo.dir/src/main.cpp.o
concordo: CMakeFiles/concordo.dir/src/canal.cpp.o
concordo: CMakeFiles/concordo.dir/src/canalTexto.cpp.o
concordo: CMakeFiles/concordo.dir/src/canalVoz.cpp.o
concordo: CMakeFiles/concordo.dir/src/mensagem.cpp.o
concordo: CMakeFiles/concordo.dir/src/sistema.cpp.o
concordo: CMakeFiles/concordo.dir/src/servidor.cpp.o
concordo: CMakeFiles/concordo.dir/src/usuario.cpp.o
concordo: CMakeFiles/concordo.dir/build.make
concordo: CMakeFiles/concordo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable concordo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/concordo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/concordo.dir/build: concordo

.PHONY : CMakeFiles/concordo.dir/build

CMakeFiles/concordo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/concordo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/concordo.dir/clean

CMakeFiles/concordo.dir/depend:
	cd "/home/gustavobiz/aaa5 semestre/T3-Concordo/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/gustavobiz/aaa5 semestre/T3-Concordo" "/home/gustavobiz/aaa5 semestre/T3-Concordo" "/home/gustavobiz/aaa5 semestre/T3-Concordo/build" "/home/gustavobiz/aaa5 semestre/T3-Concordo/build" "/home/gustavobiz/aaa5 semestre/T3-Concordo/build/CMakeFiles/concordo.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/concordo.dir/depend

