#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int co1, co2;   // Declare two integer variables 'co1' and 'co2' to store coordinates.

    printf("Input the values for X and Y coordinate : ");   // Prompt the user to input coordinates.
    scanf("%d %d", &co1, &co2);   // Read and store the user's input in 'co1' and 'co2'.

    if (co1 > 0 && co2 > 0)   
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", co1, co2);   
    else if (co1 < 0 && co2 > 0)   
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", co1, co2);  
    else if (co1 < 0 && co2 < 0)   
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n", co1, co2);  
    else if (co1 > 0 && co2 < 0)   
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", co1, co2);   
    else if (co1 == 0 && co2 == 0)   
        printf("The coordinate point (%d,%d) lies at the origin.\n", co1, co2);   
    
}