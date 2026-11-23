cmake_minimum_required(VERSION 3.28.3)

project(Calculator
    LANGUAGES CXX
)

add_library(Lib_operations
    STATIC
        src/operations.cpp
        include/operations.h
)

target_include_directories(Lib_operations
    PUBLIC include
)

add_executable(Calculator
    src/main.cpp
)

target_link_libraries(Calculator
    PRIVATE
        Lib_operations
)
