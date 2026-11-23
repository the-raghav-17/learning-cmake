add_executable(unit_tests
	       unit_tests.cpp
	       calc_test.cpp
	       ../src/calc.cpp
)

target_include_directories(unit_tests PRIVATE ../src)
add_test(NAME sum_adds_two_ints COMMAND unit_tests 1)
add_test(NAME multiply_multiplies_two_ints COMMAND unit_tests 2)
