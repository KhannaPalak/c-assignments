#include<stdio.h>
int main()
// changing the increment :
// {
//     for (int i=1 ; i<=100 ; i=i+2)
//     { printf("%d\n",i);}
// } 

// with a condition :

{
    for ( int i=1 ; i<=100 ; i++)
    {
        if(i % 2 != 0)
        { printf("%d\n",i);}
    }
}