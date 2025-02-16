cmake_minimum_required(VERSION 3.5)

project(装箱智多星)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(${PROJECT_NAME}
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    inputhandler.cpp
    inputhandler.h
    outputhandler.cpp
    outputhandler.h
    calculation.cpp
    calculation.h
)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)