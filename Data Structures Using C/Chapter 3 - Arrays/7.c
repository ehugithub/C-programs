#include <stdio.h>

void insert (int *arr, int n, int num, int pos);
//insert element in to an array



int main() {
    int n, num, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
            printf("\narr[%d] = ", i);
            scanf("%d", &arr[i]);
    }
    printf("\nEnter the number to be added: ");
    scanf("%d", &num);
    printf("\nEnter the position the number is to be added in: ");
    scanf("%d", &pos);


    insert(arr, n, num, pos);
    printf("The altered array's elements are ");

    for(int j = 0; j < n; j++) {
        printf("\n%d", arr[j]);
    }

    return 0;
}

void insert (int *arr, int n, int num, int pos) {
    for (int i = n - 1; i >= pos; i--) {
        *(arr + i + 1) = *(arr + i);
    }

    *(arr + pos) = num;
    n++;

}


