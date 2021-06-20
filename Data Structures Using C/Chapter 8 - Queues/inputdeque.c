#include <stdio.h>
#define MAX 10

//elements can be inserted or deleted at either end, also called head-tail linked list
// 2 types of deques, input restricted (inserts can only be done at one of the ends while deletions done at both), output restricted (vice versa)

int q[MAX];
int left = -1, right = -1;
void insert(void);
void deletel(void);
void deleter(void);
void display(void);


int main () {
	int option;
	do {
		printf("\n1. Insert");
		printf("\n2. Delete left");
		printf("\n3. Delete right");
		printf("\n4. Display");
		printf("\n5. Exit");
		scanf("%d", &option);
		switch (option) {
			case 1: insert(); break;
			case 2: deletel(); break;
			case 3: deleter(); break;
			case 4: display(); break;
		}
	} while(option != 5);
	return 0;
}

void insert() {
	int num;
	printf("\nEnter the value to be inserted: ");
	scanf("%d", &num);
	if((left == 0 && right == MAX - 1) || (left = right + 1)) {
		printf("\nStack is full");
		return;
	}
	if (left == -1)
		left = right = 0;
	else {
		if (left == 0)
			left = MAX - 1;
		else
			left--;
	}
	q[left = num];
}

void deletel() {
	if (left == -1) {
		printf("\nUnderflow");
		return;
	}
	printf("\nThe deleted element is %d", q[left]);
	if (left == right)
		left = right = -1;
	else {
		if (left == MAX - 1)
			left = 0;
		else
			left++;
	}
}

void deleter() {
	if(left == -1) {
		printf("\nUnderflow");
		return;
	}
	printf("\nThe element deleted is %d", q[right]);
	if(left == right)
		left = right = -1;
	else {
		if(right == 0)
			right = MAX - 1;
		else
			right--;
	}
}

void display() {
	int front = left, rear = right;
	if(front == -1) {
		printf("\nQueue is empty");
		return;
	}
	if(front <= rear) {
		while(front <= rear)
			printf("%d", q[front++]);
	}
	else {
		while(front <= MAX - 1)
			printf("%d", q[front++]);
	}
	front = 0;
	while(front <= rear)
		printf("%d", q[front++]);
}
