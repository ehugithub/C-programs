#include <stdio.h>

//insert element into sorted array

int main () {
	int n, num;
	printf("Enter the number of elements in the array: ");
    	scanf("%d", &n);
    	int arr[n];

	for (int i = 0; i < n; i++) {
            printf("\narr[%d] = ", i);
            scanf("%d", &arr[i]);
	}
    	printf("\nEnter the number to be added: ");
    	scanf("%d", &num);	
	
	for (int i = 0; i < n; i++) {
		if (arr[i] > num) {
			for (int j = n - 1; j >= i; j--)
				arr[j + 1] = arr[j];
			arr[i] = num;
			break;
		}
	}
	n++;
	printf("The altered array's elements are ");

    	for(int j = 0; j < n; j++) {
        	printf("\n%d", arr[j]);
    	}
	return 0;
}
