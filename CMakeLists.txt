cmake_minimum_required(VERSION 3.8)
project(Prog3Lernen)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp StringCompare/strcomp.h StringCompare/strcomp.cpp Aufgabe7/Figure.h Aufgabe7/structs.h Aufgabe7/Rectangle.cpp Aufgabe7/Rectangle.h Fibonnacci/fibonacci.cpp Fibonnacci/fibonacci.h)
add_executable(Prog3Lernen ${SOURCE_FILES})