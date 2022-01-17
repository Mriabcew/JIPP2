cmake_minimum_required(VERSION 3.12)

PROJECT(Thread)

include_directories(include)

add_executable(Thread src/main.cpp)

target_link_libraries(Thread pthread)