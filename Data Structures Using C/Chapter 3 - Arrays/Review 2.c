#include <stdio.h>

int main () {
    int arr[100], temp[100], num = 0;
    printf("Enter 100 numbers: ");

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        temp[i] = arr[i];
    }

    for (int j = 0; j < 100; j++) {
        for (int l = 0; l < 100; l++) {
            if (arr[j] + temp[l] == 50)
                printf("\n%d %d", arr[j], temp[l]);
        }

    }



    return 0;
}

