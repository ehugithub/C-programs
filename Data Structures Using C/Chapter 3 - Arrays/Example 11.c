#include <stdio.h>

//concatenate two arrays

int main() {
    int n1, n2;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr[n1];

    for (int i = 0; i < n1; i++) {
            printf("\narr[%d] = ", i);
            scanf("%d", &arr[i]);
    }
    printf("\nEnter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];


    for (int i = 0; i < n2; i++) {
            printf("\narr[%d] = ", i);
            scanf("%d", &arr2[i]);
    }
    int arr3[n1 + n2];
    for (int k = 0; k < n1; k++)
        arr3[k] = arr[k];
    for (int m = n1; m < (n1 + n2); m++)
        arr3[m] = arr2[m - n1];


    printf("The combined array is: ");

    for(int j = 0; j < n1 + n2; j++) {
        printf("\n%d", arr3[j]);
    }

    return 0;
}


