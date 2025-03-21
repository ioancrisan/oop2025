cmake_minimum_required(VERSION 3.30)
project(Lecture04)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lecture04 main.cpp
        geometry/Rectangle.cpp
        geometry/Rectangle.h
        geometry/Point.h
        geometry/Square.cpp
        geometry/Square.h
)
