//Q5. WAP to check whether number is Perfect Number or not.
#include <stdio.h>
 
int main()
{
    int num, rem, sum = 0, i;
 
    printf("Enter a Number: ");
    scanf("%d", &num);
    for (i = 1; i <= (num- 1); i++)
    {
        rem = num % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf("%d is perfect number", num);
    else
        printf("%d is not a perfect number", num);
    return 0;
}