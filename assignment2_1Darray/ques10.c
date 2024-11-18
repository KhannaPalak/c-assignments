//Q10. WAP to prime numbers in an array.

#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    
    int marks[num];
    int prime_count = 0;

    for (int i = 0; i < num; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        if (is_prime(marks[i])) {
            prime_count++;
        }
    }
    
    printf("Count of prime numbers: %d\n", prime_count);
    return 0;
}
