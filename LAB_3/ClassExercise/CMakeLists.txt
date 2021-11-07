cmake_minimum_required(VERSION 3.16)

project(firstClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(ClassExercise src/main.cpp src/cuboid.cpp include/cuboid.h src/sphere.cpp include/sphere.h include/quadratic_function.h src/quadratic_function.cpp include/student.h src/student.cpp)