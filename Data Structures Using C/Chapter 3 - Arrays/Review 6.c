#include <stdio.h>

int main () {
    int arr1[3][3], arr2[3][3], arr3[3][3];
    int (*p1)[3], (*p2)[3], (*p3)[3];
    p1 = arr1;
    p2 = arr2;
    p3 = arr3;


    printf("Enter the numbers in the first matrix: ");
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3;j++)
            scanf("%d", &arr1[i][j]);
    }

    printf("Enter the numbers in the second matrix: ");
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3;j++)
            scanf("%d", &arr2[i][j]);
    }

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            arr3[i][j] = arr1[i][j] + arr2[i][j];
    }



    for (int i = 0; i < 3; i++) {
        printf("\n");
        for(int j = 0; j < 3;j++)
            printf("\t%d", (*(p3 + i))[j]);
    }

    return 0;
}

