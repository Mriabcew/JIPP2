cmake_minimum_required(VERSION 3.12)

PROJECT(Node)

include_directories(include)

add_executable(Node src/main.cpp src/node.cpp)
