#include <stdio.h>

int main() {
    int A[3][2], i, j, sum = 0;

    // Input matrix
    printf("Enter elements of 3x2 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
            if (A[i][j] % 2 != 0) sum += A[i][j];
        }

    // Display sum
    printf("Sum of odd elements: %d\n", sum);

    return 0;
}
