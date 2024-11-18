/*Simple Calculator is a C language-based application used for 
performing all the simple arithmetic operations like addition, 
multiplication, division, and subtraction. The application can be 
made using basic knowledge of C like if-else statements, loops, 
etc. 
The functionalities of the application are mentioned below:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Logarithmic values
6. Square roots*/

#include<stdio.h>
#include<math.h>
int a,b,c;
int add()
{
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    c=a+b;
    printf("%d",c);
}
int sub()
{
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    c=a-b;
    printf("%d",c);
}
int mul()
{
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c=a*b;
    printf("%d",c);
}
int div()
{
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c=a/b;
    printf("%d",c);
}
int log_()
{
    int a;
    printf("Enter a positive number: ");
    scanf("%d", &a);
    if (a > 0) 
    {
        printf("Logarithm (base e): %f\n", log(a)); // Natural logarithm
        printf("Logarithm (base 10): %f\n", log10(a));
    }
    else 
    {
        printf("Error: Logarithm is defined for positive numbers only.\n");
    }
}
int squareroots()
{
    int a;
    printf("Enter a non-negative number: ");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("Square root: %f\n", sqrt(a));
    } 
    else
    {
        printf("Error: Square root is not defined for negative numbers.\n");
    }
}
int main()
{
    int choice;
    printf("Pls Enter 1 for sum\n");
    printf("Pls Enter 2 for minus\n");
    printf("Pls Enter 3 for multiplication\n");
    printf("Pls Enter 4 for division\n");
    printf("Pls Enter 5 for log of number\n");
    printf("Pls Enter 6 for square root\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        add();
        break;
        case 2:
        sub();
        break;
        case 3:
        mul();
        break;
        case 4:
        div();
        break;
        case 5:
        log_();
        break;
        case 6:
        squareroots();
        break;
  return 0;
}
}