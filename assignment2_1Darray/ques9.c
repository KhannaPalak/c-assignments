//Q9. WAP to find a peak element which is not smaller than its neighbors.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    
    int marks[num];

    for (int i = 0; i < num; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < num; i++) {
        if ((i == 0 || marks[i] >= marks[i - 1]) && (i == num - 1 || marks[i] >= marks[i + 1])) {
            printf("Peak element found: %d at index %d\n", marks[i], i);
            return 0;
        }
    }
    printf("No peak element found.\n");
    return 0;
}