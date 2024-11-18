//Q2. WAP to print grade of students as per their marks given in an array. (>=75-- A grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade
#include<stdio.h>
#define MAX_STUDENTS 100

void printGrade(int marks[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        if (marks[i] >= 75) {
            printf("Student %d: Grade A\n", i + 1);
        } else if (marks[i] >= 60) {
            printf("Student %d: Grade B\n", i + 1);
        } else if (marks[i] >= 40) {
            printf("Student %d: Grade C\n", i + 1);
        } else {
            printf("Student %d: Grade D\n", i + 1);
        }
    }
}
int main() 
{
    int marks[MAX_STUDENTS];
    int num_students;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Input the marks of each student
    printf("Enter the marks of the students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Print the grades
    printf("\nGrades of Students:\n");
    printGrade(marks, num_students);

    return 0;
}