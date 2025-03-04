#include <stdio.h>

struct Result {
    int sum;
    int product;
};

// Function returning multiple values using a structure
struct Result compute(int a, int b) {
    struct Result res;
    res.sum = a + b;
    res.product = a * b;
    return res;
}

int main() {
    int a = 5, b = 10;
    struct Result res = compute(a, b);
    printf("Sum: %d, Product: %d\n", res.sum, res.product);
    return 0;
}
