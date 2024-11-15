#include<stdio.h>

void main()
{
 int i,j,n;
 clrscr();
 printf("\n Enter the value of n:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  for(j=1;j<i;j++)
  {
   if((i+j)%2==0)
   {
 printf("\t 0");
   }
 else
 {
 printf("\t 1");
 }
  }
 printf("\n");
 }
getch();

}