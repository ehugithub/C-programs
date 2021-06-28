#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left, right;
};

void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);

int main () {

	return 0;
}

void preorder(struct node *ptr) {
	if(ptr != NULL) {
		printf("%d\t", ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void inorder(struct node *ptr) {
	if(ptr != NULL) {
		inorder(ptr->left);
		printf("%d\t", ptr->data);
		inorder(ptr->right);
	}
}

void postorder(struct node *) {
	if(ptr != NULL) {
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d\t", ptr->data);
	}
}
