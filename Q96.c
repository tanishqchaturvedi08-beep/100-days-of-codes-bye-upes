#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    int start = 0, end, i;
    char temp;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; ; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\0') {
            end = i - 1;

            // Reverse the current word
            while (start < end) {
                temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;

                start++;
                end--;
            }

            start = i + 1;

            if (sentence[i] == '\0')
                break;
        }
    }

    printf("Reversed words: %s", sentence);

    return 0;
}