#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    
    // Input matrix size
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    
    int A[m][n];

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
            sum += A[i][j];
        }

    // Display sum
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
