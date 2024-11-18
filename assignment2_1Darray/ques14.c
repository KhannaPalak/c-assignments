/*Q14. Given an array of n integers. The task is to print the num2 in the given array. 
If there are no num2 then print -1.
Examples: 
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1*/


#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int num1[n];
    int num2[n];
    int num3 = 0;

    for (int i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num1[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (num1[i] == num1[j]) 
            {
                int alreadyExists = 0;
                for (int k = 0; k < num3; k++) 
                {
                    if (num2[k] == num1[i]) 
                    {
                        alreadyExists = 1;
                        break;
                    }
                }
                if (!alreadyExists) {
                    num2[num3++] = num1[i];
                }
                break;
            }
        }
    }
    if (num3 == 0)
    {
        printf("-1\n");
    } 
    else 
    {
        printf("num2: ");
        for (int i = 0; i < num3; i++) 
        {
            printf("%d ", num2[i]);
        }
        printf("\n");
    }

    return 0;
}