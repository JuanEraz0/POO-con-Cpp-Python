# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt/build

# Utility rule file for signals-slots-qt_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/signals-slots-qt_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/signals-slots-qt_autogen.dir/progress.make

CMakeFiles/signals-slots-qt_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target signals-slots-qt"
	/usr/bin/cmake -E cmake_autogen /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt/build/CMakeFiles/signals-slots-qt_autogen.dir/AutogenInfo.json ""

signals-slots-qt_autogen: CMakeFiles/signals-slots-qt_autogen
signals-slots-qt_autogen: CMakeFiles/signals-slots-qt_autogen.dir/build.make
.PHONY : signals-slots-qt_autogen

# Rule to build all files generated by this target.
CMakeFiles/signals-slots-qt_autogen.dir/build: signals-slots-qt_autogen
.PHONY : CMakeFiles/signals-slots-qt_autogen.dir/build

CMakeFiles/signals-slots-qt_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/signals-slots-qt_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/signals-slots-qt_autogen.dir/clean

CMakeFiles/signals-slots-qt_autogen.dir/depend:
	cd /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt/build /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt/build /home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/qml-qt/signals-slots-qt/signals-slots-qt/build/CMakeFiles/signals-slots-qt_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/signals-slots-qt_autogen.dir/depend

