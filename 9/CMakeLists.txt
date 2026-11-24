cmake_minimum_required(VERSION 3.28.3)
project(NoFrameworkTests LANGUAGES CXX)

include(CTest)
add_subdirectory(src bin)
add_subdirectory(test)
