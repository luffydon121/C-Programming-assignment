#include <stdio.h>

int main() {
    int N, temp, sum = 0, digit, count = 0, power, i;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Store original number for comparison
    temp = N;

    // Count the number of digits
    int num = N;
    while (num > 0) {
        num = num / 10;
        count++;
    }

    // Compute sum of digits raised to the power of count manually
    temp = N;
    while (temp > 0) {
        digit = temp % 10;  // Extract last digit
        
        // Calculate digit^count manually
        power = 1;
        for (i = 0; i < count; i++) {
            power *= digit;
        }

        sum += power;  // Add result to sum
        temp = temp / 10;  // Remove last digit
    }

    // Check if the number is an Armstrong number
    if (sum == N) {
        printf("%d is an Armstrong Number.\n", N);
    } else {
        printf("%d is Not an Armstrong Number.\n", N);
    }

    return 0;
}
