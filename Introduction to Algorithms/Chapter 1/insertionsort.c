#include <stdio.h>

void insertionsort(int *, int);
void printarray(int *, int);


int main () {
	int list[] = {31, 41, 59, 26, 41, 58};
	int s = sizeof(list) / sizeof(list[0]);
	insertionsort(list, s);
	printarray(list, s);
	return 0;
}

void insertionsort(int *ar, int size) {
	int n, i;
	for(int j = 1; j < size; j++) {
		n = *(ar + j);
		i = j - 1;
		while(i >= 0 && *(ar + i) > n) {
			*(ar + i + 1) = *(ar + i);
			i--;
		}
		*(ar + i + 1) = n;
	}
}

void printarray(int *ar, int size) {
	for(int i = 0; i < size; i++)
		printf("%d ", *(ar + i));
	printf("\n");
}
