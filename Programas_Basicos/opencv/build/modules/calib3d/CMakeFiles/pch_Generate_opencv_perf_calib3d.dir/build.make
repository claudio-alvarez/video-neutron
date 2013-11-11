# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vermouth/Desktop/opencv-2.4.6.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vermouth/Desktop/opencv-2.4.6.1/build

# Utility rule file for pch_Generate_opencv_perf_calib3d.

# Include the progress variables for this target.
include modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/progress.make

modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d: modules/calib3d/perf_precomp.hpp.gch/opencv_perf_calib3d_RELEASE.gch

modules/calib3d/perf_precomp.hpp.gch/opencv_perf_calib3d_RELEASE.gch: ../modules/calib3d/perf/perf_precomp.hpp
modules/calib3d/perf_precomp.hpp.gch/opencv_perf_calib3d_RELEASE.gch: modules/calib3d/perf_precomp.hpp
modules/calib3d/perf_precomp.hpp.gch/opencv_perf_calib3d_RELEASE.gch: lib/libopencv_perf_calib3d_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/vermouth/Desktop/opencv-2.4.6.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating perf_precomp.hpp.gch/opencv_perf_calib3d_RELEASE.gch"
	cd /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d && /usr/bin/cmake -E make_directory /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d/perf_precomp.hpp.gch
	cd /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d && /usr/bin/c++ -O2 -DNDEBUG -DNDEBUG -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/perf" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/features2d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/highgui/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/flann/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/imgproc/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/core/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/highgui/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/ts/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/features2d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/highgui/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/flann/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/imgproc/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/core/include" -isystem"/home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/src" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/test" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/features2d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/highgui/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/flann/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/imgproc/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/core/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/highgui/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/ts/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/features2d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/highgui/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/flann/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/imgproc/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/core/include" -isystem"/home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/src" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/features2d/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/highgui/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/flann/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/imgproc/include" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/core/include" -isystem"/home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/src" -I"/home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/include" -isystem"/home/vermouth/Desktop/opencv-2.4.6.1/build" -isystem"/usr/include/eigen2" -DHAVE_CVCONFIG_H -DCVAPI_EXPORTS -DHAVE_CVCONFIG_H -fsigned-char -W -Wall -Werror=return-type -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wno-narrowing -Wno-delete-non-virtual-dtor -fdiagnostics-show-option -pthread -march=i686 -fomit-frame-pointer -msse -msse2 -msse3 -mfpmath=sse -ffunction-sections -x c++-header -o /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d/perf_precomp.hpp.gch/opencv_perf_calib3d_RELEASE.gch /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d/perf_precomp.hpp

modules/calib3d/perf_precomp.hpp: ../modules/calib3d/perf/perf_precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/vermouth/Desktop/opencv-2.4.6.1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating perf_precomp.hpp"
	cd /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d && /usr/bin/cmake -E copy /home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d/perf/perf_precomp.hpp /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d/perf_precomp.hpp

pch_Generate_opencv_perf_calib3d: modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d
pch_Generate_opencv_perf_calib3d: modules/calib3d/perf_precomp.hpp.gch/opencv_perf_calib3d_RELEASE.gch
pch_Generate_opencv_perf_calib3d: modules/calib3d/perf_precomp.hpp
pch_Generate_opencv_perf_calib3d: modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/build.make
.PHONY : pch_Generate_opencv_perf_calib3d

# Rule to build all files generated by this target.
modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/build: pch_Generate_opencv_perf_calib3d
.PHONY : modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/build

modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/clean:
	cd /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/cmake_clean.cmake
.PHONY : modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/clean

modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/depend:
	cd /home/vermouth/Desktop/opencv-2.4.6.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vermouth/Desktop/opencv-2.4.6.1 /home/vermouth/Desktop/opencv-2.4.6.1/modules/calib3d /home/vermouth/Desktop/opencv-2.4.6.1/build /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d /home/vermouth/Desktop/opencv-2.4.6.1/build/modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/calib3d/CMakeFiles/pch_Generate_opencv_perf_calib3d.dir/depend

