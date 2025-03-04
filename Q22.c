#include <stdio.h>

// Recursive function to compute sum of N natural numbers
int sumNatural(int n) {
    if (n == 0)
        return 0;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is: %d\n", n, sumNatural(n));

    return 0;
}
