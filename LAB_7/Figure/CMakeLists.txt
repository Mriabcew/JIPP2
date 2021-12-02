cmake_minimum_required(VERSION 3.12)

PROJECT(Figure_lab7)

include_directories(include)

add_executable(Figure_lab7 src/main.cpp src/figure.cpp src/circle.cpp src/rectangle.cpp src/triangle.cpp)