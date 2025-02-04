#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int check = 1 ; // check = 1 = prime
    for( int i=2 ; i <= n/2 ; i++)
    {
        if(n % i == 0)
        {
            check = 0; // check = 0 = composite
            break;
        }
    }
    if(n==1)
    {printf("1 is neither prime nor composite");}
    else if(check==1)
    { printf("%d is prime ",n);}
    else
    {printf("%d is composite ",n);}
}