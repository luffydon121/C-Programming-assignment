#include <stdio.h>

int main() {
    int arr[5], *ptr, sum = 0;

    // Input elements
    printf("Enter 5 elements: ");
    for (ptr = arr; ptr < arr + 5; ptr++)
        scanf("%d", ptr);

    // Compute sum
    for (ptr = arr; ptr < arr + 5; ptr++)
        sum += *ptr;

    printf("Sum: %d\n", sum);
    return 0;
}
