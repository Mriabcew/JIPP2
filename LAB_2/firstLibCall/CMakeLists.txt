cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(firstLibCall)

include_directories(${CMAKE_SOURCE_DIR}LAB_2/firstLib/include)

add_executable(firstLibCall src/main.cpp)

target_link_libraries(firstLibCall firstLib)
