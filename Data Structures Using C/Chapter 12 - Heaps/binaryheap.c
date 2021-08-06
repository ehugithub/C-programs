#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
//max heap

int heap[SIZE];
int ind = 0;

int parent(int);
int left(int);
int right(int);
void insert(int [], int);
void swap(int *, int *);
void delete(int []);

int main () {

	return 0;
}

void swap(int *a, int *b) {
	int *temp;
	temp = a;
	a = b;
	b = temp;
}

int parent(int n) {
	return (n + 1) / 2;
}
int left(int n) {
	return (2 * n + 1);
}
int right(int n) {
	return (2 * n + 2);
}
void insert(int arr[], int data) {
	arr[ind++] = data;
	int ind2 = ind;
	while(ind2 > 1 && arr[ind2] > arr[parent(ind2)]) {
		swap(arr + ind2, arr + parent(ind2));
		ind2 = parent(ind2);
	}
	return;
}
void delete(int arr[]) {
	arr[0] = arr[ind--];
	int ind2 = 0;
	while(ind2 < ind && (arr[ind2] < arr[left(ind2)] || arr[ind2] < arr[right(ind2)])) {
		if(arr[ind2] < arr[left(ind2)]) {
			swap(arr + ind2, arr + left(ind2));
			ind2 = left(ind2);
		}
		else {
			swap(arr + ind2, arr + right(ind2));
			ind2 = right(ind2);
		}	
	}
}
