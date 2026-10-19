#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int a[100][100], b[100][100], product[100][100];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;

            for (int k = 0; k < cols1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}