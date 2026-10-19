#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count characters from first string
    for (i = 0; str1[i] != '\0'; i++) {
        if (!isspace((unsigned char)str1[i])) {
            count[tolower((unsigned char)str1[i])]++;
        }
    }

    // Subtract characters from second string
    for (i = 0; str2[i] != '\0'; i++) {
        if (!isspace((unsigned char)str2[i])) {
            count[tolower((unsigned char)str2[i])]--;
        }
    }

    // Check all counts
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}