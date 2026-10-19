#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Function to check if a string is a palindrome
bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Compare characters (case-insensitive checking)
        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
            return false; // Characters don't match, not a palindrome
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    char str[100];

    printf("Enter a string: ");
    
    // Read input safely using fgets
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        // Remove trailing newline character added by fgets
        str[strcspn(str, "\n")] = '\0';

        if (isPalindrome(str)) {
            printf("\"%s\" is a palindrome.\n", str);
        } else {
            printf("\"%s\" is not a palindrome.\n", str);
        }
    }

    return 0;
}
