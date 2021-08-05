#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
//max heap

int heap[SIZE];
int index = 0;

int parent(int);
int left(int);
int(right);
void insert(int [], int, int *);
void swap(int *, int *);

int main () {

	return 0;
}

void swap(int *a, int *n) {
	int *temp;
	temp = a;
	a = b;
	b = temp;
}

int parent(int n)
	return (n + 1) / 2;

int left(int n)
	return (2 * n + 1);

int right(int n)
	return (2 * n + 2);

int insert(int arr[], int data, int *n) {
	arr[index] = data;
	if(arr[index] > arr[parent(index)])
		swap(arr[i], arr[parent(index)]);

}
