#include <stdio.h>

int main() {
    int a, b, c, max;

    // Input three numbers
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Finding the maximum number
    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else {
        max = c;
    }

    // Output the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
