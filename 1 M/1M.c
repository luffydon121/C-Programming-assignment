#include <stdio.h>

int main() {
    int num, temp, sum, digit;

    printf("Armstrong numbers between 100 and 500 are:\n");

    // Loop through numbers from 100 to 500
    for (num = 100; num <= 500; num++) {
        temp = num;
        sum = 0;

        // Compute the sum of cubes of digits
        while (temp > 0) {
            digit = temp % 10;  // Extract last digit
            sum += digit * digit * digit;  // Compute cube and add to sum
            temp = temp / 10;  // Remove last digit
        }

        // Check if the number is an Armstrong number
        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
