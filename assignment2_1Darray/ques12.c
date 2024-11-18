/*Q12. WAP to implement delete-Front, any position in between & end in an array. Print 
the array before delete & after delete.*/

#include <stdio.h>

int main() 
{
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    
    int marks[num];

    for (int i = 0; i < num; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Array before delete: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    int position;
    printf("Enter the position to delete (1 to %d for front, 2 to %d for between, %d for end): ", num, num, num);
    scanf("%d", &position);

    if (position < 1 || position > num) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = position - 1; i < num - 1; i++) {
        marks[i] = marks[i + 1];
    }
    num--;

    printf("Array after delete: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    return 0;
}