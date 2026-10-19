#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u') {
            printf("%c", str[i]);
        }
    }

    return 0;
}