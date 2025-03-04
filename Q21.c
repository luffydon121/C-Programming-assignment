#include <stdio.h>

// Recursive function to compute factorial
long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1; // Base case: 0! and 1! = 1
    else
        return num * factorial(num - 1); // Recursive case
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is: %lld\n", num, factorial(num));

    return 0;
}
