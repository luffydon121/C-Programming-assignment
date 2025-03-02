#include <stdio.h>

int main() {
    int N;
    unsigned long long factorial = 1; // Use unsigned long long to store large values

    // Input N
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    // Check for negative input
    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }

        // Output the factorial
        printf("Factorial of %d is: %llu\n", N, factorial);
    }

    return 0;
}
