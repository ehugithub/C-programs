#include <stdio.h>

void mergesort(int *, int, int);
void printarray(const int *, int);
void merge(int *, int, int, int);
void mergesort(int *, int, int);

int main() {
	int list[] = {6, 3, 1, 4, 2, 5};
	int s = sizeof(list) / sizeof(list[0]);
	printarray(list, s);
	return 0;
}

void printarray(const int *ar, int n) {
	for(int i = 0; i < n; i++)
		printf("%d ", *(ar + i));
	printf("\n");

}



void mergesort(int ar[], int a, int b) {
	int c = a + (b - a + 1) / 2;
	if(a < b) {
		

	}

}
