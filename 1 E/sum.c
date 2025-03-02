#include <stdio.h>

int main() {
    int N, sum = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Ensure N is positive
    if (N < 0) {
        N = -N;  // Convert to positive for correct digit sum
    }

    // Calculate sum of digits
    while (N > 0) {
        digit = N % 10;  // Extract last digit
        sum += digit;    // Add to sum
        N = N / 10;      // Remove last digit
    }

    // Output the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
