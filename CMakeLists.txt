cmake_minimum_required(VERSION 3.10)

project(DockLog)

set(CMAKE_CXX_STANDARD 11)
set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)
set(VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

add_executable(dock_log src/main.cpp)
set_target_properties(dock_log PROPERTIES VERSION ${VERSION_STRING})

target_include_directories(dock_log PRIVATE src/)
