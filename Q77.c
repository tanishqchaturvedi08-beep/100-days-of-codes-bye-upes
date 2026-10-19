#include <stdio.h>
#include <stdbool.h>

bool diagonalDistinct(int matrix[][100], int rows, int cols) {
    int diagonalSize = rows < cols ? rows : cols;

    for (int i = 0; i < diagonalSize; i++) {
        for (int j = i + 1; j < diagonalSize; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int rows, cols;
    int matrix[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (diagonalDistinct(matrix, rows, cols)) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }

    return 0;
}