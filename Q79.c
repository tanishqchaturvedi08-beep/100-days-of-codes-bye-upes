#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            // Move upward-right
            int row = (d < rows) ? d : rows - 1;
            int col = d - row;

            while (row >= 0 && col < cols) {
                printf("%d ", matrix[row][col]);
                row--;
                col++;
            }
        } else {
            // Move downward-left
            int col = (d < cols) ? d : cols - 1;
            int row = d - col;

            while (col >= 0 && row < rows) {
                printf("%d ", matrix[row][col]);
                row++;
                col--;
            }
        }
    }

    return 0;
}