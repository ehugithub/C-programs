#include <stdio.h>
int main() {
    int num, smallest = 0, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];

    printf("Enter the elements: ");
    for (int i = 0; i < num; i++) {
            scanf("%d", &arr[i]);
            if (!smallest)
                smallest = arr[i];
            if (arr[i] < smallest) {
		    arr[i] = smallest;
	    	    pos = i;
	    }
    }

    printf("The position of the smallest element in the array is: %d", pos);
    return 0;
}

