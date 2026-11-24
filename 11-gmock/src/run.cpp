#include <iostream>
#include "calc.h"
#include "rng_mt19937.h"

using namespace std;

int run()
{
    auto rng = new Random_number_generator_mt19937();
    Calc c{ rng };
    cout << "Random dice throw + 1 = "
	 << c.add_random_number(1) << endl;
    delete rng;
    return 0;
}
