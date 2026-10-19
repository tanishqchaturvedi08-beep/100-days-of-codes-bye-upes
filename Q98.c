#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char *word[20];
    int count = 0, i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Split the name into words
    word[count] = strtok(name, " \n");
    while (word[count] != NULL) {
        count++;
        word[count] = strtok(NULL, " \n");
    }

    if (count == 0) {
        printf("No name entered.\n");
        return 0;
    }

    // Print initials of all names except surname
    for (i = 0; i < count - 1; i++) {
        printf("%c. ", toupper((unsigned char)word[i][0]));
    }

    // Print surname in full
    printf("%s\n", word[count - 1]);

    return 0;
}