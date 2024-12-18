//Q6. WAP to find average score of the Marks array
#include<stdio.h>
#define MAX_STUDENTS 100

int main() {
    int marks[MAX_STUDENTS];
    int num_students;
    int sum = 0; 
    float average; 
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    printf("Enter the marks of the students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < num_students; i++) {
        sum += marks[i];
    }
    if (num_students > 0) {
        average = (float)sum / num_students; 
        printf("\nAverage score of the Marks array: %.2f\n", average);
    } else
    {
        printf("\nNo students to calculate average.\n");
    }
    return 0;
}