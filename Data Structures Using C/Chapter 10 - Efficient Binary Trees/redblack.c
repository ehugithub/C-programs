#include <stdio.h>
#include <stdlib.h>
enum colour{RED, BLACK};

struct node {
	int data;
	struct node *left, *right, *parent;
	enum colour;
} *root = NULL;

struct node *insert(struct node *, int);
struct node *grandparent(struct node *);
struct node *uncle(struct node *);
void checkvalid(struct node *);

int main () {

	return 0;
}

struct node *grandparent(struct node *ptr) {
	if(ptr != NULL && ptr->parent != NULL)
		return ptr->parent->parent;
	else
		return NULL;
}

struct node *uncle(struct node *ptr) {
	struct node *p = grandparent(ptr);
	if(p == NULL)
		return NULL
	else if(ptr->parent == p->left)
		return p->right;
	else if(ptr->parent == p->right)
		return p->left;
}

struct node *insert(struct node *ptr, int num) {
	struct node *a;
	if(ptr == NULL) {
		ptr->data = num;
		ptr->left = ptr->right = ptr->parent = NULL;
		ptr->colour = BLACK;
		checkvalid(ptr);
		return ptr;
	}
	else if(num < ptr->data) {
		ptr->left = insert(ptr->left, num);
	}
	else if(num > ptr->data) {
		ptr->right = insert(ptr->right, num);
}

void checkvalid(struct node *ptr) {
	if(ptr->parent == NULL)
		ptr->colour = BLACK;
	else if(ptr->parent->colour == BLACK)
		return;
	else if((uncle(ptr) != NULL) && (uncle(ptr)->colour == RED)) {
		ptr->parent->colour = BLACK;
		uncle(ptr) = BLACK;
		grandparent(ptr) = RED;
		checkvalid(grandparent(ptr));

	}

}
