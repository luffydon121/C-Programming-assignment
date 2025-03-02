#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    int i, isPalindrome = 1;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    printf(isPalindrome ? "Palindrome\n" : "Not a Palindrome\n");

    return 0;
}
