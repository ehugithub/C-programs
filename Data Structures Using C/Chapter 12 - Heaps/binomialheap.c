#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node {
	int data;
	struct node *parent, *sibling, *child;
	int degree;
} *root;

void create(struct node *);
struct node *minkey();
void linktree(struct node *, struct node *);
struct node *unionheap(struct node *, struct node *);



int main () {

	return 0;
}

void create(struct node *p) {
	p = (struct node *)malloc(sizeof(struct node));
}

struct node *minkey() {
	struct node *y = NULL, *x = root;
	int min = INT_MIN;
	while(x != NULL) {
		if(x->data < min) {
			min = x->data;
			y = x;
		}
		x = x->sibling;
	}
	return y;
}

void linktree(struct node *p1, struct node *p2) {
	p1->parent = p2;
	p1->sibling = p2->child;
	p2->child = p1;
	p2->degree++;
}

struct node *unionheap(struct node *p1, struct node *p2) {

}
