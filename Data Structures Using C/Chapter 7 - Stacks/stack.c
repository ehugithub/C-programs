#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX], top = -1;
void push(int stack[], int val);
int pop (int stack[]);
int peek(int stack[]);
void display (int stack[]);

int main () {
	int input, num;
	do {
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Peek");
		printf("\n4. Display");
		printf("\n5. Exit");
		printf("\nEnter your option: ");
		scanf("%d", &input);
		switch (input) {
			case 1: printf("\nEnter the number to be pushed: ");
					scanf("%d", &num);
					push(stack, num);
					break;
			case 2: printf("\nThe number popped is %d(-1 means stack was empty)", pop(stack));
					break;
			case 3: printf("\nThe number at the top of the stack is %d(-1 means stack was empty)", peek(stack));
					break;
			case 4: display(stack);
					break;
		}
	} while (input != 5);
	return 0;
}

void push (int stack[], int val) {
	if (top == MAX-1)
		printf("\nStack Overflow");
	else 
		stack[++top] = val;
}

int pop (int stack[]) {
	if (top == -1) {
		printf("\nStack Underflow");
		return -1;
	}
	else 
		return stack[top--];
}

void display (int stack[]) {
	if (top == -1)
		printf("\nStack Empty");
	else
		for (int i = top; i > -1; i--)
			printf("\n %d \n", stack[i]);
}

int peek (int stack[]) {
	if (top == -1) {
		printf("\nStack is empty");
		return -1;
		}
	else
		return stack[top];
}
