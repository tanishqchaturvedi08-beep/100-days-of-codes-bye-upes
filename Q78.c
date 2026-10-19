#include <stdio.h>

int main() {
    int n, matrix[100][100], sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}