//Q7. WAP to check whether score is even or odd in an array.


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
        if (marks[i] % 2 == 0) {
            printf("Student %d: Even\n", i + 1);
        } else {
            printf("Student %d: Odd\n", i + 1);
        }
    }
    return 0;
}
