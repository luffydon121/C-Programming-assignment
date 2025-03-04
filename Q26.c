#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i;

    // Memory allocation using malloc
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input and display elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("Elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
