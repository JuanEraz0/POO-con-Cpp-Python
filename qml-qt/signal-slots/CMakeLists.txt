cmake_minimum_required(VERSION 3.14)

# Cambiamos el nombre del proyecto
project(signal-slots LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

# Cambiamos el nombre del ejecutable a "signal-slots"
add_executable(signal-slots
    main.cpp
    UserInteractor.h
    UserInteractor.cpp
    Firefox.h Firefox.cpp
    InternetExplorer.h InternetExplorer.cpp
)

target_link_libraries(signal-slots Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS signal-slots
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
