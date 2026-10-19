#include <stdio.h>

int main(void) {
    char str[1000];
    int seen[26] = {0};
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (seen[str[i] - 'a']) {
                printf("%c\n", str[i]);
                return 0;
            }
            seen[str[i] - 'a'] = 1;
        }
    }

    printf("No repeating lowercase alphabet found\n");
    return 0;
}