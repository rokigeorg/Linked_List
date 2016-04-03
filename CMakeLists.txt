cmake_minimum_required(VERSION 3.3)
project(chandedList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Punkt.cpp Punkt.h CList.cpp CList.h)
add_executable(chandedList ${SOURCE_FILES})