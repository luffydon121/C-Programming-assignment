#include <stdio.h>

int main() {
    int A[3][2], T[2][3], i, j;

    // Input 3x2 matrix
    printf("Enter elements of 3x2 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    // Compute transpose
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            T[j][i] = A[i][j];

    // Display transpose
    printf("Transpose matrix (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }

    return 0;
}
