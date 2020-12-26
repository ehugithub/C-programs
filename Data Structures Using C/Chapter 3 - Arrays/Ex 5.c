#include <stdio.h>
int main() {
    int num;

    printf("Enter the number of digits: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++) {
            printf("\nEnter the digit at position %d: ", i + 1);
            scanf("%d", &arr[i]);
    }

    printf("The number is: ");
    for (int j = num - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    return 0;
}

