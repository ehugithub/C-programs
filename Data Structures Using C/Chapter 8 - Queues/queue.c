#include <stdio.h>
#define MAX 10

int queue[MAX];
int top = -1, rear = -1;

void insert(void);
int delete(void);
int peek(void);
void display(void);

int main () {
	int option;

	do {
		printf("\n1. Insert an element");
		printf("\n2. Delete an element");
		printf("\n3. Peek");
		printf("\n4. Display");
		printf("\n5. Exit");
		printf("\nEnter your option: ");
		scanf("%d", &option);
		switch (option) {
			case 1: insert(); break;
			case 2: printf("The value deleted is %d (-1 means queue was empty).", delete()); break;
			case 3: printf("The first value is %d (-1 means queue was empty).", peek()); break;
			case 4: display(); break;
		}
	} while (option != 5);
	return 0;
}

void insert() {
	int n;
	if (top == -1)
		top = 0;
	if (rear == MAX - 1)
		printf("\nQueue Overflow");
	else {
		printf("\nEnter the number to be inserted: ");
		scanf("%d", &n);
		queue[++rear] = n;
	}
}

int delete() {
	int num;
	if ((top == -1) || (top > rear))
		return -1;
	else {
		num = queue[top++];
		if (top > rear)
			top = rear = -1;
		return num;
	}
}

int peek() {
	if ((top == -1) || (top > rear))
		return -1;
	else return queue[top];

}

void display () {
	if ((top == -1) || (top > rear))
		printf("\nQueue is empty");
	else {
		printf("\n");
		for (int i = top; i <= rear; i++) {
			printf("%d\t", queue[i]);
			}
	}
}
