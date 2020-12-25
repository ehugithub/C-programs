#include <stdio.h>

int main() {
    int num;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++) {
            printf("\narr[%d] = ", i);
            scanf("%d", &arr[i]);
    }

    printf("The array elements are ");

    for(int j = 0; j < num; j++) {
        printf("\t %d", arr[j]);
    }
}
