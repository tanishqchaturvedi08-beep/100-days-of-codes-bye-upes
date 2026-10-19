#include <stdio.h>

int main(void) {
    int rows, columns, i, j;
    int a[100][100], b[100][100];

    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    return 0;
}