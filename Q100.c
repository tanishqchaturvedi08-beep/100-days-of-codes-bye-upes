#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end, i, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    printf("All substrings are:\n");

    for (start = 0; start < length; start++) {
        for (end = start; end < length; end++) {
            for (i = start; i <= end; i++) {
                printf("%c", str[i]);
            }
            printf("\n");
        }
    }

    return 0;
}