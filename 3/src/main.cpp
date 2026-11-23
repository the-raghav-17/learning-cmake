#include <iostream>

#include "operations.h"


int main()
{
    auto sum = add(100, 200);
    std::cout << "sum: " << sum << '\n';

    auto difference = subtract(123, 211);
    std::cout << "Difference: " << difference << '\n';
}
