cmake_minimum_required(VERSION 3.28.3)

project(Calculator)

add_library(calc STATIC src/calc.cpp)

target_include_directories(calc PUBLIC include)
