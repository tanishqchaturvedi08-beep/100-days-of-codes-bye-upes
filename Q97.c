#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first letter and each letter after a space
    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0 && !isspace((unsigned char)name[i])) {
            printf("%c", toupper((unsigned char)name[i]));
        } 
        else if (isspace((unsigned char)name[i]) &&
                 !isspace((unsigned char)name[i + 1]) &&
                 name[i + 1] != '\0') {
            printf(".%c", toupper((unsigned char)name[i + 1]));
        }
    }

    printf(".\n");

    return 0;
}