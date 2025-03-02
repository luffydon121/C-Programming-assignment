#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    // Loop from 1 to 100
    for (num = 2; num <= 100; num++) {
        isPrime = 1; // Assume num is prime

        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        // Print prime numbers
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
