cmake_minimum_required(VERSION 3.16)

project(SimpleCalc)

set(CMAKE_CXX_STANDARD 17)

add_executable(simpleCalc src/main.cpp src/calc.cpp include/calc.h)