#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next;

    // Input N
    printf("Enter the number of terms: ");
    scanf("%d", &N);

    // Check for invalid input
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series up to %d terms: ", N);
        
        // Print first term
        printf("%d ", first);
        
        // Print second term if N > 1
        if (N > 1) {
            printf("%d ", second);
        }

        // Generate Fibonacci series
        for (int i = 3; i <= N; i++) {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
