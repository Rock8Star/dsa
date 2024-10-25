#include <stdio.h>

int main() {

    int matrix[10][10];

    int rows, cols;

    int trace_sum = 0, total_sum = 0;

 

    printf("Enter the number of rows: ");

    scanf("%d", &rows);

    printf("Enter the number of columns: ");

    scanf("%d", &cols);

 

    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            scanf("%d", &matrix[i][j]);

            total_sum += matrix[i][j];

            if (i == j) {

                trace_sum += matrix[i][j];

            }

        }

    }

 

    for (int i = 0; i < rows; i++) {

        int row_sum = 0;

        for (int j = 0; j < cols; j++) {

            row_sum += matrix[i][j];

        }

        printf("Sum of row %d = %d\n", i + 1, row_sum);

    }

 

    for (int i = 0; i < cols; i++) {

        int col_sum = 0;

        for (int j = 0; j < rows; j++) {

            col_sum += matrix[j][i];

        }

        printf("Sum of column %d = %d\n", i + 1, col_sum);

    }

 

    if (rows == cols) {

        printf("Trace sum = %d\n", trace_sum);

    } else {

        printf("Matrix is not square; trace sum is not applicable.\n");

    }

 

    printf("Sum of all elements = %d\n", total_sum);

    return 0;

}
