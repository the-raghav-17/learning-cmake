#include <iostream>

#include "operations.h"


int main()
{
    auto sum = add(100, 456);
    auto diff = subtract(4522, 935);

    std::cout << "sum: " << sum << '\n';
    std::cout << "diff: " << diff << '\n';
}
