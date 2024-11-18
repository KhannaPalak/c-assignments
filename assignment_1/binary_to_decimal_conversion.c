//Q7. WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice.
#include <stdio.h>
#include <math.h>

void binaryToDecimal()
{
    long long binary;
    int decimal = 0, remainder, i = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) 
    {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("The decimal equivalent is: %d\n", decimal);
}
void decimalToBinary()
{
    int decimal, remainder;
    char binary[32];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) 
    {
        printf("The binary equivalent is: 0\n");
        return;
    }

    while (decimal != 0) 
    {
        remainder = decimal % 2;
        binary[i] = remainder + '0';
        decimal /= 2;
        i++;
    }

    printf("The binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%c", binary[j]);
    }
    printf("\n");
}
int main() 
{
    int choice;

    printf("Choose the conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            binaryToDecimal();
            break;
        case 2:
            decimalToBinary();
            break;
        default:
            printf("Invalid choice. Please select 1 or 2.\n");
            break;
    }
    return 0;
}