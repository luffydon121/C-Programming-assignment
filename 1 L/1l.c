#include <stdio.h>

int main() {
    int num, temp, reverse, digit;

    printf("Palindrome numbers between 100 and 500 are:\n");

    // Loop through numbers from 100 to 500
    for (num = 100; num <= 500; num++) {
        temp = num;
        reverse = 0;

        // Reverse the number
        while (temp > 0) {
            digit = temp % 10;  // Extract last digit
            reverse = reverse * 10 + digit;  // Append to reverse
            temp = temp / 10;  // Remove last digit
        }

        // Check if the number is a palindrome
        if (reverse == num) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
