#pragma once
#include "rng.h"

class Calc {
public:
    Calc(Random_number_generator* rng);
    int sum(int a, int b);
    int multiply(int a, int b);
    int add_random_number(int a);

private:
    Random_number_generator* m_rng{};
};
