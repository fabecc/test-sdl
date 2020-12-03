

find_library(SDL2_LIBRARY NAME SDL2)
add_executable(MyProject main.c)
include_directories(MyProject ${SDL2_INCLUDE_DIRS})
target_link_libraries(MyProject ${SDL2_LIBRARIES})
