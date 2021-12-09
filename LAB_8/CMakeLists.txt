cmake_minimum_required(VERSION 3.12)

PROJECT (Note)

include_directories(include)

add_executable(Note src/main.cpp src/note.cpp src/listNote.cpp src/noteDirector.cpp)