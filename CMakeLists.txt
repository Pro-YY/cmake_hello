cmake_minimum_required(VERSION 3.4)

set (PROJECT hello)

file (GLOB PROJECT_SRCS *.c)
project (${PROJECT} C)
add_executable (${PROJECT} ${PROJECT_SRCS})

add_subdirectory(greeting)
target_link_libraries(${PROJECT} greeting)
