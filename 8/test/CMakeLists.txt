add_executable(unit_tests
	test_runner.cpp
	test_operations.cpp
)

target_link_libraries(unit_tests
	PRIVATE
		calculator
)

add_test(NAME test_operation_add COMMAND unit_tests 1)
add_test(NAME test_operation_subtract COMMAND unit_tests 2)
add_test(NAME test_operation_multiply COMMAND unit_tests 3)
add_test(NAME test_operation_divide COMMAND unit_tests 4)
