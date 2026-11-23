cmake_minimum_required(VERSION 3.28.0)

project(Calculator
	LANGUAGES CXX
)

include(CTest)

add_subdirectory(src)
add_subdirectory(test)
