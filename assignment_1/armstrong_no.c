//Q1. WAP to check whether a given is Armstrong or not

#include <stdio.h>
int main() 
{
    int num, a, remainder, result = 0;   // a is the original number !
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    a = num;

    while (a != 0) 
    {
        remainder = a % 10;
        result += remainder * remainder * remainder;
        a /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}