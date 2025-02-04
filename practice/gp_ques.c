#include<stdio.h>
int main()
// // method 1:

// {
//     int n;
//     printf("enter the no. of terms:");
//     scanf("%d",&n);
//     for (int i=4 ; i<= 3*n-1 ; i=i+3)
//     { printf("%d\n",i);}
// } 

// method 2:
{
    int n;
    printf("enter the no. of terms:");
    scanf("%d",&n);
    int a=3;
    for ( int i=1 ; i<=n ; i++ )
    {
        printf("%d ",a);
        a =  a * 4;
    }
}