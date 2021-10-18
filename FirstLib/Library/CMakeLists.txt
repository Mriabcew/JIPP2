cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 14)

# Dodajemy ścieżkę, w ktorej mają być wyszukiwane pliki nagłwkowe
include_directories(include)

# Dodajemy pliki, które mają byc kompilowane
# STATIC - biblioteka będzie statyczna
add_library(FirstLib STATIC src/lib.cpp)