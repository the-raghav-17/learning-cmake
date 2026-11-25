cmake_minimum_required(VERSION 3.28.0)
project(Factorial)

add_library(factorial
	STATIC
		factorial.cpp
)

target_include_directories(factorial
	PUBLIC
		.
)

add_subdirectory(tests)
