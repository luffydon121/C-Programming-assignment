#include <stdio.h>

int main() {
    int numbers[5], i, sum = 0;
    float avg;

    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Compute average
    avg = sum / 5.0;

    // Display results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
