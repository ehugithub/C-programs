#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node {
	int data;
	struct node *parent, *sibling, *child;
	int degree;
} *root;

void create(struct node *);
struct node *minkey(struct node *);
struct node *unionheap(struct node *, struct node *);
struct node *merge(struct node *, struct node *);
struct node *mindegree(struct node *);
void deleteh(struct node *);

int main () {

	return 0;
}

void create(struct node *p) {
	p = (struct node *)malloc(sizeof(struct node));
}

struct node *minkey(struct node *p) {
	struct node *y = NULL, *x = p;
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

struct node *mindegree(struct node *p) {
	struct node *n = NULL, *m = p;
	int min = INT_MIN;
	while(m != NULL) {
		if(m->degree < min) {
			min = m->degree;
			n = m;
			m->degree = INT_MAX;
		}
		m = m->sibling;
	}
	return (min == INT_MAX) ? NULL : n;
}

struct node *merge(struct node *n, struct node *k) {
	// n is smaller than k
	k->parent = n;
	k->sibling = n->child;
	n->child = k;
	n->degree++;
	return n;
}

void deleteh(struct node *n) {
	if(n->child != NULL) 
		deleteh(n->child);
	else if(n->sibling != NULL)
		deleteh(n->sibling);
	free(n);

}

struct node *unionheap(struct node *p1, struct node *p2) {
	struct node *new, *temp = p1, *next, *ptr;
	create(new);
	new = (mindegree(p1) < mindegree(p2)) ? p1 : p2;
	temp = new;
	while(mindegree(p1) != NULL || mindegree(p2) != NULL) {
		temp->sibling = (mindegree(p1) < mindegree(p2)) ? p1 : p2;
		temp = temp->sibling;
	}
	deleteh(p1);
	deleteh(p2);
	temp = new;
	next = temp->sibling;
	while(next != temp) {
		if(temp->degree == next->degree && next->sibling->degree == next->degree) {
			next = next->sibling;
			ptr = ptr->sibling;
		}
		else {
			if(ptr->data < next->data)
				merge(ptr, next);
			else
				merge(next, ptr);
			next = ptr->sibling;
		}
	}
	return new;
}
