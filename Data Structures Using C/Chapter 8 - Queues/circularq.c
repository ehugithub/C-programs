#include <stdio.h>
#define MAX 10

int q[MAX];
int top = -1, tail = -1;

void insert();
int delete();
int peek();
void display();

int main () {
	int option;
	do {
		printf("\n1. Insert");
		printf("\n2. Delete");
		printf("\n3. Peek");
		printf("\n4. Display");
		printf("\n5. Exit");
		printf("\nEnter your option: ");
		scanf("%d", &option);
		switch (option) {
			case 1: insert();
					break;
			case 2: printf("The value removed was %d(-1 means the queue was empty).", delete());
					break;
			case 3: printf("The value at the top of the queue is %d(-1 means the queue is empty).", peek());
					break;
			case 4: display();
		}
	} while(option != 5);
	return 0;
}

void insert() {
	int num;
	if(top == -1)
		top = 0;
	if ((tail == MAX - 1 && top == 0) || (top - 1 == tail && top != 0))
		printf("\nQueue full");
	else {
		if (tail == MAX - 1)
			tail = -1;
		printf("Enter the number to be inserted: ");
		scanf("%d", &num);
		q[++tail] = num;
	}
}

int delete() {
	int num;
	if (top == -1)
		return -1;
	else if (top == tail) {
		num = q[top];
		top = tail = -1;
	}
	else if (top == MAX - 1) {
		num = q[top];
		top = 0;
	}
	else
		num = q[top++];
	return num;
}

int peek() {
	if (top == -1)
		return -1;
	else
		return q[top];
}

void display() {
	int n;
	if (top == -1)
		printf("Queue is empty");
	else {
		for (n = top; n != tail; n++) {
			if (n == MAX - 1)
				n = 0;
			printf("%d\t", q[n]);
		}
		printf("%d", q[n]);
	}
}
