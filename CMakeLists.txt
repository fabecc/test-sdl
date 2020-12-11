cmake_minimum_required(VERSION 3.7)

project(TestSDL C)

# includes cmake/FindSDL2.cmake
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(test-sdl main.c)
target_link_libraries(test-sdl ${SDL2_LIBRARY})
