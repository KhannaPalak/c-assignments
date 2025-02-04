#include<stdio.h>
int main()
// with a condition :

{
    int n;
    printf("enter value for n:");
    scanf("%d",&n);
    for (int i=n ; i<=n*10 ; i++)
    {
        if(i%n==0)
        { printf("%d\n",i);}
    }
} 