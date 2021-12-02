cmake_minimum_required(VERSION 3.12)

PROJECT(Triangle)

include_directories(include ../Node/include/)


add_executable(Traingle src/main.cpp src/triangle.cpp ../Node/src/node.cpp)