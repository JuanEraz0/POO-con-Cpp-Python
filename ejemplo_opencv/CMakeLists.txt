cmake_minimum_required(VERSION 3.25)

project( ejemploOpenCV LANGUAGES CXX)

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( ejemploOpenCV main.cpp )

target_link_libraries( ejemploOpenCV ${OpenCV_LIBS} )
