#include <stdio.h>
#include <malloc.h>
/* each element of a priority queue is assigned a priority. which determines the order of which elements will be processed. An elment 
with higher priority processed first, two elemetns of same priority are processed on a first-come-first serve basis
widely uses in os to execute highest priority processes first 
the element that is to be removed is searched and subsequently removed.
*/

struct node {
	int data;
	int prio;
	struct node *next;
} *q = NULL;

struct node *insert(struct node *);
struct node *delete(struct node *);
void display(struct node *);

int main() {
	int option;
	do {
		printf("\n1. Insert element");
		printf("\n2. Delete element");
		printf("\n3. Display");
		printf("\n4. Exit");
		printf("\nEnter your option: ");
		scanf("%d", &option);
		switch (option) {
			case 1: q = insert(q); break;
			case 2: q = delete(q); break;
			case 3: display(q); break;
			}
		} while(option != 4);
	return 0;
}

struct node *insert(struct node *q) {
	struct node *ptr, *ptr2;
	int n, p;
	ptr = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data to be entered: ");
	scanf("%d", &n);
	printf("Enter the priority of that element: ");
	scanf("%d", &p);
	ptr->data = n;
	ptr->prio = p;
	if(q == NULL || p < q->prio) {
		ptr->next = q;
		q = ptr;
	}
	else {
		ptr2 = q;
		while(ptr2->next != NULL && ptr2->next->prio <= p)
			ptr2 = ptr2->next;
		ptr->next = ptr2->next;
		ptr2->next = ptr;
	}
	return q;
}

struct node *delete(struct node *q) {
	struct node *ptr = q;
	if (q == NULL) {
		printf("Underflow");
		return q;
	}
	else {
		ptr = q;
		printf("The deleted value was %d", q->data);
		q = q->next;
		free(ptr);
	}
	return q;
}
void display(struct node *q) {
	struct node *ptr = q;
	if(q == NULL)
		printf("Queue is empty");
	else {
		printf("Data \t Priority\n");
		while(ptr != NULL) {
			printf("%d\t%d\t\n", ptr->data, ptr->prio);
			ptr = ptr->next;
		}
	}
}
