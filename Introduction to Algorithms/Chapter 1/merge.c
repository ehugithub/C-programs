#include <stdio.h>

void printarray(const int *, int);
void merge(int [], int, int, int);
void mergesort(int [], int, int);

int main() {
	int list[] = {6, 3, 1, 4, 2, 5, 7};
	int s = sizeof(list) / sizeof(list[0]);
	mergesort(list, 0, s - 1);
	printarray(list, s);
	return 0;
}

void printarray(const int *ar, int n) {
	for(int i = 0; i < n; i++)
		printf("%d ", *(ar + i));
	printf("\n");
}

void merge(int ar[], int a, int b, int c) {
	int i, j, k;
	int n1 = b - a + 1;
	int n2 = c - b;
	int L[n1], R[n2];
	for(i = 0; i < n1; i++)
		L[i] = ar[a + i];
	for(j = 0; j < n2; j++)
		R[j] = ar[b + 1 + j];
	i = j = 0;
	k = a;
	while(i < n1 && j < n2) {
		if(L[i] < R[j])
			ar[k++] = L[i++];
		else
			ar[k++] = R[j++];
	}
	while(i < n1)
		ar[k++] = L[i++];
	while(j < n2)
		ar[k++] = R[j++];
}


void mergesort(int ar[], int a, int c) {
	if(a < c) {
		int b = (a + c) / 2;
		mergesort(ar, a, b);
		mergesort(ar, b + 1, c);
		merge(ar, a, b, c);
	}
}
