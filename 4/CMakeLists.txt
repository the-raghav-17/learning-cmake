cmake_minimum_required(VERSION 3.28.3)

project(Calculator
    LANGUAGES CXX
)

add_library(Operations
    STATIC
        src/operations/add.cpp
        src/operations/subtract.cpp
        include/operations.h
)

target_include_directories(Operations
    PUBLIC
        include
)

add_executable(calculator src/main.cpp)

target_link_libraries(calculator
    PRIVATE
        Operations
)
