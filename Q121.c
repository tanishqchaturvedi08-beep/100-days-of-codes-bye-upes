
#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    scanf("%99s", name);
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data saved successfully.");

    return 0;
}
