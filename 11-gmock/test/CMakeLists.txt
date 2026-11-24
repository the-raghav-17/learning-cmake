include(FetchContent)
FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG	       v1.14.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests calc_test.cpp)
target_link_libraries(unit_tests
	PRIVATE
		sut
		gtest_main
		gmock
)

include(GoogleTest)
gtest_discover_tests(unit_tests)
