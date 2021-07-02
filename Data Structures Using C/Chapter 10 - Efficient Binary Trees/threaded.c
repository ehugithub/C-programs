#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *left, *right;
	int thread;
} *start = NULL;
struct node *insert(struct node *, struct node *, struct node *);
struct node *create();
void inorder(struct node *);

int main () {
	create();
	printf("\nThe in-order traversal is: ");
	inorder(start);
	return 0;
}

struct node *insert(struct node *start, struct node *ptr, struct node *ptr2) {
	if(start == NULL) {
		start = ptr;
		if(ptr2 != NULL) {
			start->right = ptr2;
			start->thread = 1;
		}
	}
	else if(ptr->data < start->data)
		start->left = insert(start->left, ptr, start);
	else
		if(start->thread == 1) {
			start->right = insert(NULL, ptr, ptr2);
			start->thread = 0;
		}
		else
			start->right = insert(start->right, ptr, ptr2);
	return start;
}

struct node *create() {
	struct node *ptr;
	int num;
	printf("\nEnter elements, press -1 to end: ");
	scanf("%d", &num);
	while(num != -1) {
		ptr = (struct node *)malloc(sizeof(struct node));
		ptr->data = num;
		ptr->left = ptr->right = NULL;
		ptr->thread = 0;
		start = insert(start, ptr, NULL);
		printf("\nEnter the next element: ");
		fflush(stdin);
		scanf("%d", &num);
	}
	return start;
}

void inorder(struct node *start) {
	struct node *ptr = start, *prev;
	do {
		while(ptr != NULL) {
			prev = ptr;
			ptr = ptr->left;
		}
		if(prev != NULL) {
			printf(" %d", prev->data);
			ptr = prev->right;
			while(prev != NULL && prev->thread == 1) {
				printf(" %d", ptr->data);
				prev = ptr;
				ptr = ptr->right;
			}
		}
	} while(ptr != NULL);
}
