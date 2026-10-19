#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    // Swap characters until the left and right pointers meet
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    
    // fgets is preferred over gets() as it protects against buffer overflow
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        // Remove the trailing newline character added by fgets if present
        str[strcspn(str, "\n")] = '\0';

        reverseString(str);

        printf("Reversed string: %s\n", str);
    }

    return 0;
}
