#include <stdio.h>

// 2D array pointer


int main () {
    int arr[2][2]={{1, 2}, {3, 4}};
    int i, (*p)[2];
    p = arr;
    for (i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d", (*(p + i))[j]);
    }

    return 0;
}

