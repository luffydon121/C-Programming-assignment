#include <stdio.h>

int main() {
    int numbers[5], i;
    int min, max;

    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize min and max with the first element
    min = max = numbers[0];

    // Loop through the array to find min and max
    for (i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Output results
    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);

    return 0;
}
