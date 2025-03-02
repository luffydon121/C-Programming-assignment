#include <stdio.h>

int main() {
    int N, reverse = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Handle negative numbers
    int isNegative = (N < 0) ? 1 : 0;
    if (isNegative) {
        N = -N;  // Convert to positive for correct reversal
    }

    // Calculate reverse of the number
    while (N > 0) {
        digit = N % 10;  // Extract last digit
        reverse = reverse * 10 + digit;  // Append digit to reverse
        N = N / 10;  // Remove last digit
    }

    // Restore negative sign if needed
    if (isNegative) {
        reverse = -reverse;
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}
