cmake_minimum_required(VERSION 3.28.0)
project(Webserver)

include(FetchContent)
FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG	       v1.14.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests
	test_int.cpp
)

target_link_libraries(unit_tests
	PRIVATE
		GTest::gtest_main
)
