#include <iostream>

#include "operations.h"

int main()
{
    std::cout << "Hello, world\n";
    auto op1 = add(100, 105);
    auto op2 = subtract(2314, 5234);

    std::cout << "op1: " << op1 << '\n';
    std::cout << "op2: " << op2 << '\n';

    std::cout << "Doing some changes in main file\n";
}
