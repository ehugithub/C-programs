#include <stdio.h>
#define MAX 10

//circular queue solves the problem with regular queus when dequeueing an element still leaves the list unable to be added new values


int q[MAX];
int *top = NULL, *tail = NULL;

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
	if(top == NULL)
		top = q;
	if ((tail == q + MAX && top == q) || (top - 1 == tail && top != q))
		printf("\nQueue full");
	else {
		if (tail == q + MAX)
			tail = NULL;
		printf("Enter the number to be inserted: ");
		scanf("%d", ++tail);
	}
}

int delete() {
	int num;
	if (top == NULL)
		return -1;
	else if (top == tail) {
		num = *top;
		top = tail = NULL;
	}
	else if (top == q + MAX) {
		num = *top;
		top = q;
	}
	else
		num = *top++;
	return num;
}

int peek() {
	if (top == NULL)
		return -1;
	else
		return *top;
}

void display() {
	int *n;
	if (top == NULL)
		printf("Queue is empty");
	else {
		for (n = top; n != tail; n++) {
			if (n == q + MAX)
				n = q;
			printf("%d\t", *n);
		}
		printf("%d", *n);
	}
}
