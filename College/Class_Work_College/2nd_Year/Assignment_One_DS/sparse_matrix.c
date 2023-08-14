#include <stdio.h>
#include<conio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
void printSparseMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) 
{
    int nonZeroCount = 0;
    int sparseMatrix[MAX_ROWS * MAX_COLS][3]; // 3 columns for (row, col, value)

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparseMatrix[nonZeroCount][0] = i;
                sparseMatrix[nonZeroCount][1] = j;
                sparseMatrix[nonZeroCount][2] = matrix[i][j];
                nonZeroCount++;
            }
        }
    }

    if (nonZeroCount <= 0.3 * rows * cols) {
        printf("\nSparse Matrix:\n");
        printf("Row\tColumn\tValue\n");
        for (int i = 0; i < nonZeroCount; i++) {
            printf("%d\t%d\t%d\n", sparseMatrix[i][0], sparseMatrix[i][1], sparseMatrix[i][2]);
        }
    } else {
        printf("\nThe number of zeros is less than or equal to 70%% of the total elements, "
               "so the matrix is not considered sparse.\n");
    }
}

int main() {
    int rows, cols;
    int matrix[MAX_ROWS][MAX_COLS];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

     printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Matrix is :\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printSparseMatrix(matrix, rows, cols);
    getch();
    return 0;
}
