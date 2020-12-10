
project(TestSDL C)
find_library(SDL2_LIBRARY NAME SDL2)

add_executable(test-sdl main.c)
include_directories(test-sdl ${SDL2_INCLUDE_DIRS})
target_link_libraries(test-sdl ${SDL2_LIBRARIES})
