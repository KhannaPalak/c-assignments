//Q8. WAP to find maximum & minimum score in the Marks array.

#include <stdio.h>

void findMinMax(float num[], int n) {
    float min = num[0];
    float max = num[0];

    for (int i = 1; i < n; i++) {
        if (num[i] < min)
            min = num[i];
        else if (num[i] > max)
            max = num[i];
    }

    printf("Minimum score: %.2f\n", min);
    printf("Maximum score: %.2f\n", max);
}

int main() {
    int num1;
    printf("Enter the number of students: ");
    scanf("%d", &num1);
    
    float marks[num1];

    for (int i = 0; i < num1; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    
    // Find minimum and maximum elements
    findMinMax(marks, num1);
    
    return 0;
}
