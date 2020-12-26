#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++) {
            printf("\narr[%d] = ", i);
            scanf("%d", &arr[i]);
            sum += arr[i];
    }

    printf("The sum of the array elements = %d", sum);
    printf("\nThe mean of the array elements = %.2f", (float) sum / num);

    return 0;
}
