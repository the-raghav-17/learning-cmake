#include <random>
#include "rng_mt19937.h"

int Random_number_generator_mt19937::get()
{
    std::random_device rd{};
    std::mt19937 gen{ rd() };
    std::uniform_int_distribution<> distrib{1, 6};
    return distrib(gen);
}
