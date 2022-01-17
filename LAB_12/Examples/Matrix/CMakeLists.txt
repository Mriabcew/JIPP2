cmake_minimum_required(VERSION 3.12)

project(matrixTest)

add_executable(matrixTest src/main.cpp src/TimeMeasure.cpp)

target_include_directories(matrixTest PUBLIC include)