cmake_minimum_required(VERSION 3.7)

project(TestSDL C)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(test-sdl main.c)
target_link_libraries(test-sdl ${SDL2_LIBRARIES})
