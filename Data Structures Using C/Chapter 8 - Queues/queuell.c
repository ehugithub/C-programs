#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

struct queue {
	struct node *top;
	struct node *rear;
};

struct queue *q;
void createq(struct queue *);
struct queue *insert(struct queue *, int);
int delete(struct queue *);
void display(struct queue *);
int peek(struct queue*);

int main () {
	int option, num;
	q = (struct queue *)malloc(sizeof(struct queue));
	createq(q);
	do {
		printf("\n1. Insert");
		printf("\n2. Delete");
		printf("\n3. Display");
		printf("\n4. Peek");
		printf("\n5. Exit");
		printf("\nEnter your option: ");
		scanf("%d", &option);
		switch (option) {
			case 1: printf("Enter the value to be inserted: ");
					scanf("%d", &num);
					q = insert(q, num);
					break;
			case 2: printf("The value deleted was %d(-1 means the queue was empty).\n", delete(q));
					break;
			case 3: display(q);
					break;
			case 4: printf("The value a the front is %d(-1 means the queue was empty)\n.", peek(q));
					break;
		}	
	} while(option != 5);
	return 0;
}

void createq(struct queue *q) {
	q->top = NULL;
	q->rear = NULL;
}

struct queue *insert(struct queue *q, int num) {
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = num;
	if(q->top == NULL){
		q->top = ptr;
		q->rear = ptr;
		q->top->next = q->rear->next = NULL;
	}
	else {
		q->rear->next = ptr;
		q->rear = ptr;
		q->rear->next = NULL;
	}
	return q;
}

void display(struct queue *q) {
	struct node *ptr;
	ptr = q->top;
	if (ptr == NULL)
		printf("\nQueue empty");
	else {
		printf("\n%d", ptr->data);
		while (ptr != q->rear) {
			ptr = ptr->next;
			printf("\n%d", ptr->data);
		}
	}
}

int delete(struct queue *q) {
	struct node *ptr;
	int num;
	ptr = q->top;
	if (ptr == NULL)
		return -1;
	else {
		q->top = ptr->next;
		num = ptr->data;
		free(ptr);
		return num;
	}
}

int peek(struct queue *q) {
	if (q->top == NULL)
		return -1;
	else
		return q->top->data;
}
