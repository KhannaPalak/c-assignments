//Q8. WAP to print below mentioned pattern:
#include<stdio.h>

int main() {
    int rows = 5; 

    for (int i = 1; i <= rows; i++) { 
        for (int j = 1; j <= i; j++) { 
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); 
    }

    return 0;
}