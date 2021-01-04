#include <stdio.h>

// matrix maker


int main () {
    int rows, columns;
    printf("Enter rows of matrix: ");
    scanf("%d", &rows);
    printf("Enter columns of matrix: ");
    scanf("%d", &columns);

    int matrix[rows][columns];


    printf("Enter the elements of the matrix: ");
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            scanf("%d", &matrix[i][j]);
    }

    printf("The matrix is: ");
    for (int a = 0; a < rows; a++) {
        printf("\n");
        for (int b = 0; b < columns; b++)
            printf("\t %d", matrix[a][b]);
    }


    return 0;
}

