#include <stdio.h>

int main() {
    int N;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Check if the number is even or odd
    if (N % 2 == 0) {
        printf("%d is Even.\n", N);
    } else {
        printf("%d is Odd.\n", N);
    }

    return 0;
}
