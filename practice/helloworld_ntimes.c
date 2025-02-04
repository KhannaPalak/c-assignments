#include<stdio.h>
int main()
{
    int n;
    printf("enter how many times you want to enter HelloWorld:");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        printf("HelloWorld\n");
    }
    return 0;
}

