add_executable(unit_tests
	       unit_tests.cpp
	       calc_test.cpp
	      # run_test.cpp
)

target_link_libraries(unit_tests PRIVATE sut)

add_test(NAME sum_adds_two_ints COMMAND unit_tests 1)
add_test(NAME multiply_multiplies_two_ints COMMAND unit_tests 2)
add_test(NAME run_outputs_correct_equations COMMAND unit_tests 3)

