#include <stdio.h>

int main() {
    int N, sum;

    // Input N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Using the formula to calculate sum
    sum = (N * (N + 1)) / 2;

    // Output the sum
    printf("The sum of first %d natural numbers is: %d\n", N, sum);

    return 0;
}
