//Q11. Create a program to count the number of 1 bits in an integer input by the user.

#include <iostream>
using namespace std;

int countOneBits(int number) 
{
    int count = 0;
    while (number) {
        count += number & 1;
        number >>= 1;
    }
    return count;
}

int main() 
{
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;

    int onesCount = countOneBits(userInput);
    cout << "The number of 1 bits in " << userInput << " is " << onesCount << "." << endl;

    return 0;
}