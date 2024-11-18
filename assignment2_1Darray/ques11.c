/*Q11. WAP to implement Insert -Front, any position in between & end in an array. Print
the array before insert & after insert.*/

#include<stdio.h>
int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    
    int marks[num + 1];

    for (int i = 0; i < num; i++) 
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Array before insert: ");
    for (int i = 0; i < num; i++) 
    {
        printf("%d ", marks[i]);
    }
    printf("\n");

    int position, value;
    printf("Enter the position to insert (1 to %d for front, %d to %d for between, %d for end): ", 1, num, num + 1);
    scanf("%d", &position);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (position < 1 || position > num + 1) 
    {
        printf("Invalid position! Please enter a position between 1 and %d.\n", num + 1);
        return 1;
    }
    for (int i = num; i >= position - 1; i--) 
    {
        marks[i] = marks[i - 1];
    }
    marks[position - 1] = value;
    num++;

    printf("Array after insert: ");
    for (int i = 0; i < num; i++) 
    {
        printf("%d ", marks[i]);
    }
    printf("\n");

    return 0;
}