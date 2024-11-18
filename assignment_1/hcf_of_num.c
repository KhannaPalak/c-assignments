//Q2. WAP to read two integers and print their HCF (Highest Common Factor).

#include <stdio.h> 
void main()  
{  
    int i, num1, num2, j, hcf=1; 
    printf("Enter 1st number for HCF: ");  
    scanf("%d", &num1);  
    printf("Enter 2nd number for HCF: "); 
    scanf("%d", &num2);  

    j = (num1 < num2) ? num1 : num2;  

    for(i = 1; i <= j; i++)  
    {  
        if(num1 % i == 0 && num2 % i == 0)  
        {  
            hcf = i;  
        }  
    }  

    printf("\nHCF of %d and %d is : %d\n\n", num1, num2, hcf);  
}
