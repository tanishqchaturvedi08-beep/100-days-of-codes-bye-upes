#include <stdio.h>

int main(void) {
    int matrix[100][100], n, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                printf("Not a symmetric matrix\n");
                return 0;
            }
        }
    }

    printf("Symmetric matrix\n");
    return 0;
}