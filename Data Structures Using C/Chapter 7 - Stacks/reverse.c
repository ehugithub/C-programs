#include <stdio.h>
#include <stdlib.h>


int stack[10];
void push(int);
int pop();
int top = -1;




int main() {
	int n;
	printf("Enter the number of numbers in the list(max 10): ");

	scanf("%d", &n);
	int arr[n];
	printf("Enter the numbers of the list, separated by a space: ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for(int i = 0; i < n; i++)
		push(arr[i]);
		arr[i] = pop();
	/*for(int i = 0; i < n; i++)
		arr[i] = pop(); */
	printf("\nThe reversed array is: ");
	for (int i = 0; i < n; i++)
		printf("\n %d", arr[i]);
	printf("\n");
	return 0;
}

void push(int num) {
	stack[++top] = num;
}

int pop () {
	return stack[top--];
}
