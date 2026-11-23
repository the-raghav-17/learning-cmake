#include "operations.h"

#include <cstdlib>


void test_operation_add()
{
    if (5 != add(2, 3)) {
	std::exit(1);
    }
}


void test_operation_subtract()
{
    if (100 != subtract(150, 50)) {
	std::exit(1);
    }
}


void test_operation_multiply()
{
    if (45 != multiply(9, 5)) {
	std::exit(1);
    }
}


void test_operation_divide()
{
    if (12 != divide(48, 4)) {
	std::exit(1);
    }
}
