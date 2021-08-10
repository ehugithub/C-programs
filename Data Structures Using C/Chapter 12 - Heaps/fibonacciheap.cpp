#include <iostream>
#include <malloc.h>
#include <cstdlib>
using namespace std;

struct node {
	int data;
	int degree;
	int numnodes = 0;
	bool mark;
	node *parent;
	node *child;
	node *left;
	node *right;
};

typedef struct node *nodeptr;

nodeptr min = nullptr;

void initialize(nodeptr, int, int);
void insert(nodeptr, int);
nodeptr unionheap(nodeptr, nodeptr);

int main () {
	return 0;
}

void initialize(nodeptr node, int data, int degree) {
	node = (nodeptr)malloc(sizeof(node));
	node->data = data;
	node->degree = degree;
	node->parent = node->child = nullptr;
	node->left = node->right = node;
	node->mark = false;
}

void insert(nodeptr min, int num) {
	nodeptr node;
	initialize(node, num, 0);
	if(min != nullptr) {
		min->left->right = node;
		node->right = min;
		node->left = min->left;
		min->left = node;
		if(min->data > node->data)
			min = node;
	}
	else
		min = node;
	min->numnodes++;
}

nodeptr unionheap(nodeptr h1, nodeptr h2) {
	nodeptr temp1 = h1, temp2 = h2;
	h1->right->left = h2->left;
	h2->left->right = h1->right;
	h1->left = h2;
	h2->right = h1;
	if(h1->data < h2->data) {
		free(h2);
		h1->numnodes += h2->numnodes;
		return h1;
	}
	else {
		free(h1);
		h2->numnodes += h1->numnodes;
		return h2;
	}
}
