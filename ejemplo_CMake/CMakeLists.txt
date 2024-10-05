cmake_minimum_required(VERSION 3.25) #La versión de CMake que se va a utilizar
project(ejemploCmake LANGUAGES CXX) #Nombre del proyecto en el cual se hara el ejecutable acompañado de sus caracteristicas

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git 
    GIT_TAG 10.1.1
)
FetchContent_MakeAvailable(fmt)


add_executable(ejemplocmake main.cpp)

target_link_libraries(ejemplocmake PRIVATE fmt::fmt)


