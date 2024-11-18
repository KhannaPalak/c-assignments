//Q4. WAP to accept two integer numbers and swap them using 4 different methods in C language.

#include <stdio.h>
void swapUsingTemp(int *a, int *b);
void swapUsingArithmetic(int *a, int *b);
void swapUsingXOR(int *a, int *b);
void swapUsingPointers(int **a, int **b);

int main() 
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);
    swapUsingTemp(&num1, &num2);
    printf("After swapping using temp: num1 = %d, num2 = %d\n", num1, num2);
    swapUsingTemp(&num1, &num2);
    swapUsingArithmetic(&num1, &num2);
    printf("After swapping using arithmetic: num1 = %d, num2 = %d\n", num1, num2);
    swapUsingTemp(&num1, &num2);
    swapUsingXOR(&num1, &num2);
    printf("After swapping using XOR: num1 = %d, num2 = %d\n", num1, num2);
    swapUsingTemp(&num1, &num2);
    swapUsingPointers(&num1, &num2);
    printf("After swapping using pointers: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
void swapUsingTemp(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapUsingArithmetic(int *a, int *b) 
{
    *a = *a + *b;
    *b = *a - *b; 
    *a = *a - *b; 
}
void swapUsingXOR(int *a, int *b) 
{
    *a = *a ^ *b;
    *b = *a ^ *b; 
    *a = *a ^ *b;
}
void swapUsingPointers(int **a, int **b) 
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}