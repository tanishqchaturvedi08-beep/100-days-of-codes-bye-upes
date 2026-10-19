#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[500];
    char longest[100] = "";
    char word[100];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        // Skip spaces
        while (isspace((unsigned char)sentence[i])) {
            i++;
        }

        j = 0;

        // Read one word
        while (sentence[i] != '\0' &&
               !isspace((unsigned char)sentence[i])) {
            word[j++] = sentence[i++];
        }

        word[j] = '\0';

        // Check whether this is the longest word
        if (j > maxLength) {
            maxLength = j;
            strcpy(longest, word);
        }
    }

    if (maxLength > 0)
        printf("Longest word: %s\n", longest);
    else
        printf("No word found.\n");

    return 0;
}