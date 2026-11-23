#include "operations.h"

#include <iostream>


void calculator()
{
    double a{};
    double b{};
    char   operation{};

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Choose the operation(+ - * /): ";
    std::cin >> operation;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    double result{};
    
    switch (operation) {
    case '+':
	result = add(a, b);
	break;

    case '-':
	result = subtract(a, b);
	break;

    case '*':
	result = multiply(a, b);
	break;

    case '/':
	result = divide(a, b);
	break;
    }

    std::cout << "Result: " << result << '\n';
}
