#include <stdio.h>

void selectionsort(int *, int);
void printarray(int *, int);
void swap(int *, int *);

int main () {
	int list[] = {5, 6, 3, 1, 2, 4};
	int s = sizeof(list) / sizeof(list[0]);
	selectionsort(list, s);
	printarray(list, s);
	return 0;
}

void selectionsort(int *ar, int size) {
	int num, temp, k;
	for(int i = 0; i < size; i++) {
		num = *(ar + i);
		for(int j = i + 1; j < size; j++) {
			if (*(ar + j) < num) {
				num = *(ar + j );
				k = j;
			}
		}
		if(*(ar + k) < *(ar + i))
			swap(ar + k, ar + i);
	}
}

void swap(int *n1, int *n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void printarray(int *ar, int size) {
	for(int i = 0; i < size; i++)
		printf("%d ", *(ar + i));
	printf("\n");
}
