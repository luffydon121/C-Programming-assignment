#include <stdio.h>

void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) { // Descending order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    
    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort array in descending order
    sortDescending(arr, n);

    // Display sorted array
    printf("Sorted Array (Descending): ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Find second largest element
    printf("\nSecond largest element: %d\n", arr[1]);

    return 0;
}
