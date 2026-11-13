cmake_minimum_required(VERSION 3.28.3)

project(My_project)

add_executable(main main.cpp operations.cpp operations.h)

add_library(Module_operations
	OBJECT
		operations.cpp
		operations.h
)

add_executable(main main.cpp)

target_link_libraries(main Module_operations)
