#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, sum = 0;

    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    printf("Sum: %d\n", sum);
    free(ptr);
    return 0;
}
