#include <stdio.h>

int main() {
    int N, maxDigit = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Ensure N is positive
    if (N < 0) {
        N = -N;  // Convert to positive for correct max digit evaluation
    }

    // Find maximum digit
    while (N > 0) {
        digit = N % 10;  // Extract last digit
        if (digit > maxDigit) {
            maxDigit = digit;  // Update max digit if current is greater
        }
        N = N / 10;  // Remove last digit
    }

    // Output the maximum digit
    printf("Maximum digit: %d\n", maxDigit);

    return 0;
}
