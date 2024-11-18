/*Q13. Given an array, the task is to cyclically rotate the array clockwise by one time. 
Examples: 
Input: num1[] = {1, 2, 3, 4, 5} 
Output: num1[] = {5, 1, 2, 3, 4}
Input: num1[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}*/

 #include <stdio.h>

int main() {
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    
    int num1[num];

    for (int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num1[i]);
    }

    printf("Array before rotation: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", num1[i]);
    }
    printf("\n");

    if (num > 1) {
        int last = num1[num - 1];
        for (int i = num - 1; i > 0; i--) {
            num1[i] = num1[i - 1];
        }
        num1[0] = last;
    }

    printf("Array after rotation: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", num1[i]);
    }
    printf("\n");

    return 0;
}