//Q10. develop a program that take two integers as input and determines if the first is the multiple of the second using relational and logical operators.

#include <iostream>

int main() 
{
    
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    if (num2 != 0 && num1 % num2 == 0) {
        std::cout << num1 << " is a multiple of " << num2 << ".\n";
    } else {
        if (num2 == 0) {
            std::cout << "The second integer cannot be zero.\n";
        } else {
            std::cout << num1 << " is not a multiple of " << num2 << ".\n";
        }
    }

    return 0;
}
