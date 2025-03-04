#include <stdio.h>

// User-defined function to check even or odd
void isEven(int num) {
    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call function
    isEven(num);

    return 0;
}
