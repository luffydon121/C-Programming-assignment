#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;          // Extract last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        num = num / 10;            // Remove last digit
    }

    return (original == reversed); // Return 1 if palindrome, 0 otherwise
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call function and display result
    if (isPalindrome(num))
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is Not a Palindrome.\n", num);

    return 0;
}
