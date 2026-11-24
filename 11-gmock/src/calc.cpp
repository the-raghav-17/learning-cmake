#include "calc.h"

Calc::Calc(Random_number_generator* rng)
{
    m_rng = rng;
}

int Calc::sum(int a, int b) {
    return a + b;
}

int Calc::multiply(int a, int b) {
    return a * a;
}

int Calc::add_random_number(int a)
{
    return a + m_rng->get();
}
