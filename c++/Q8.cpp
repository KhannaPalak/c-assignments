//Q8. wap that take the user full name and age as input and display a greeting with the name and the number of days they have lived.
#include <iostream>
#include <string>

int main() 
{
    std::string fullName;
    int age;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName); 

    std::cout << "Enter your age in years: ";
    std::cin >> age;

    int daysLived = age * 365;

    std::cout << "Hello, " << fullName << "! You have lived approximately " 
              << daysLived << " days.\n";

    return 0;
}
