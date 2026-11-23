#include "calc.h"
#include <cstdlib>

void sum_adds_two_integers()
{
    Calc sut;
    if (4 != sut.sum(2, 2)) {
	std::exit(1);
    }
}


void multiply_multiplies_two_integers()
{
    Calc sut;
    if (3 != sut.multiply(1, 3)) {
	std::exit(1);
    }
}
