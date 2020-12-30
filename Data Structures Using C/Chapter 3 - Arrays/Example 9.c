#include <stdio.h>

//remove element from an array


int main() {
    int n, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
            printf("\narr[%d] = ", i);
            scanf("%d", &arr[i]);
    }
    printf("\nEnter the position where the number will be deleted: ");
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i+1];
    n--;
    printf("The altered array's elements are ");

    for(int j = 0; j < n; j++) {
        printf("\n%d", arr[j]);
    }

    return 0;
}
