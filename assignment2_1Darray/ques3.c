//Q3. WAP to find who scored first “99” in an array marks
#include<stdio.h>
#define MAX_STUDENTS 100

int main() {
    int marks[MAX_STUDENTS];
    int num_students;
    int found_index = -1; 
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    printf("Enter the marks of the students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < num_students; i++) {
        if (marks[i] == 99) {
            found_index = i; 
            break; 
        }
    }
    if (found_index != -1) {
        printf("The first student to score 99 is Student %d (Index: %d).\n", found_index + 1, found_index);
    } else {
        printf("No student scored 99.\n");
    }

    return 0;
}