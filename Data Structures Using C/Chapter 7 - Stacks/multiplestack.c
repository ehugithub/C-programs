#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX], topA = -1, topB = MAX;

/* when a stack is in a single array, it has a fixed size. it might be inconvenient later to prerperly optimize space like this, a solution is to have multiple stacks in a large enough array. one stack starts from the left side and moves inward, the other from the right side.

*/



void pushA(int val) {
	if(topA == topB - 1)
		printf("\nOverflow");
	else {
		stack[topA++] = val;
	}
}

int popA() {
	int val;
	if(topA == -1) {
		printf("\nUnderflow");
		val = -1;
	}
	else {
		val = stack[topA--];
	}
	return val;
}

void display_stackA() {
	if (topA == -1)
		printf("\nStack A is empty");
	else {
		for(int i = topA; i > -1; i++)
			printf("\n%d", stack[i]);
	}
}

void pushB(int val) {
	if(topB-1 == topA)
		printf("\nOverflow");
	else {
		stack[--topB] = val;
	}
}

int popB() {
	int val;
	if(topB == MAX) {
		printf("\nUnderflow");
		val = -1;
	}
	else {
		val = stack[topB++];
	}
}

void display_stackB() {
	if (topB == MAX)
		printf("\nStack B is  empty");
	else {
		for (int i = topB; i < MAX; i++)
			printf("\n%d", stack[i]);
	}
}

int main () {
	int option, val;
	do {
		printf("\n1. Push stack A");
		printf("\n2. Push stack B");
		printf("\n3. Pop stack A");
		printf("\n4. Pop stack B");
		printf("\n5. Display stack A");
		printf("\n6. Display stack B");
		printf("\n7. Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &option);
		switch(option) {
			case 1: printf("\nEnter the value to be pushed: ");
					scanf("%d", &val);
					pushA(val);
					break;
			case 2: printf("\nEnter the value to be pushed: ");
					scanf("%d", &val);
					pushB(val);
					break;
  			case 3: printf("The popped value is %d (-1 means stack is empty)", popA());
					break;
			case 4: printf("The popped value is %d (-1 means stack is empty)", popB());
			case 5: printf("The contents of Stack A are: \n");
					display_stackA();
					break;
			case 6: printf("The contents of Stack B are: \n");
					display_stackB();
					break;
		}
	} while(option != 7);
	return 0;
}
