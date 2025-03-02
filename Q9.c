#include <stdio.h>

int main() {
    int A[2][3], i, j, sum;

    // Input matrix
    printf("Enter elements of 2x3 matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    // Compute row sums
    for (i = 0; i < 2; i++) {
        sum = 0;
        for (j = 0; j < 3; j++)
            sum += A[i][j];
        printf("Sum of row %d: %d\n", i + 1, sum);
    }

    return 0;
}
