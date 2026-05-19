#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int **matrix;
    int i, j;
    int sum;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    matrix = (int **)malloc(rows * sizeof(int *));

    for(i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    sum = matrix[0][0] +
          matrix[0][cols - 1] +
          matrix[rows - 1][0] +
          matrix[rows - 1][cols - 1];

    printf("\nSum of four corner elements = %d\n", sum);

    for(i = 0; i < rows; i++) {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}