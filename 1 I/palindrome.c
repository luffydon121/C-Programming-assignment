#include <stdio.h>

int main() {
    int N, reverse = 0, temp, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Store original number for comparison
    temp = N;

    // Reverse the number
    while (temp > 0) {
        digit = temp % 10;  // Extract last digit
        reverse = reverse * 10 + digit;  // Append digit to reverse
        temp = temp / 10;  // Remove last digit
    }

    // Check if the number is a palindrome
    if (reverse == N) {
        printf("%d is a Palindrome.\n", N);
    } else {
        printf("%d is Not a Palindrome.\n", N);
    }

    return 0;
}
