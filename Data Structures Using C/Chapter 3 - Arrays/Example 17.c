#include <stdio.h>

//Pascal's triangle

int main () {
    int size;
    printf("Input the size of the triangle: ");
    scanf("%d", &size);

    int arr[size][size];

    for (int a = 0; a < size; a++) {
            for (int b = 0; b < size; b++)
                arr[a][b] = 0;
    }


    arr[0][0] = arr[1][0] = arr[1][1] = 1;


    for (int i = 2; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
    }

    for(int m = 0; m < size; m++) {
        printf("\n");
        for(int n = 0; n <= m; n++)
            printf("\t%d", arr[m][n]);
    }
}

