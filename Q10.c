#include <stdio.h>

int main() {
    int m, n, i, sum = 0;
    
    // Input matrix size
    printf("Enter square matrix size (m x m): ");
    scanf("%d", &m);
    
    int A[m][m];

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++)
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
            if (i == j) sum += A[i][j];  // Sum diagonal elements
        }

    // Display sum
    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
