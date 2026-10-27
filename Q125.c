
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    printf("Enter filename: ");
    scanf("%99s", filename);

    getchar();

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    printf("Text appended successfully.\n");

    fclose(fp);

    return 0;
}
