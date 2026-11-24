#include "rng.h"

class Random_number_generator_mt19937
        : public Random_number_generator
{
public:
    int get() override;
}
