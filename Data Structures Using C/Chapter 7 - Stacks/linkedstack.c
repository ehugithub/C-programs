#include <stdio.h>
#include <stdlib.h>

/*size of stack is fixed, might be inconvenient
linked representation of stacks
linked stack, every node has two parts, one that stores data (num) and one that points to the next node
start pointer of the linked list is used as Top
storage requirement is O(n), typical time requirement for operations is O(1)

*/

struct stack {
	int data;
	struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *pop(struct stack *);
int peek(struct stack *);
void display (struct stack *);

int main () {
	int option, val;
	do {
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Peek");
		printf("\n4. Display");
		printf("\n5. Exit");
		printf("\nEnter your option: ");
		scanf("%d", &option);
		switch (option) {
			case 1: printf("Enter the number to be pushed: ");
					scanf("%d", &val);
					top = push(top, val);
					break;
			case 2: top = pop(top);
					break;
			case 3: printf("The value at the top of the stack is %d (-1 is stack is empty)", peek(top));
					break;
			case 4: display(top);
					break;
		}

	} while (option != 5);
	return 0;
}

struct stack *push(struct stack *top, int val) {
	struct stack *ptr;
	ptr = (struct stack *)malloc(sizeof(struct stack));
	ptr->data = val;
	if (top == NULL) {
		ptr->next = NULL;
		top = ptr;
	}
	else {
		ptr->next = top;
		top = ptr;
	}
	return top;
}

void display(struct stack *top) {
	struct stack *ptr;
	ptr = top;
	if (top == NULL)
		printf("\n Stack is empty");
	else {
		while (ptr != NULL) {
			printf("\n%d", ptr->data);
			ptr = ptr->next;
			}
		}
}

struct stack *pop (struct stack *top) {
	struct stack *ptr;
	ptr = top;
	if (top == NULL)
		printf("Stack Underflow");
	else {
		top = ptr->next;
		printf("The value being popped is %d", ptr->data);
		free(ptr);
	}
	return top;
}

int peek (struct stack *top) {
	if (top == NULL)
		return -1;
	else
		return top->data;
}
