#include<stdio.h>
int main()
// with a condition :

{
    for (int i=19 ; i<=190 ; i++)
    {
        if(i%19==0)
        { printf("%d\n",i);}
    }
} 

// by changing the increment :

// {
//     for (int i=19 ; i<=190 ; i=i+19)
//     { printf("%d\n",i);}
   
// }