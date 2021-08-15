#include <iostream>
#include <malloc.h>
#include <cstdlib>
using namespace std;

struct node {
	int data;
	int degree;
	bool mark;
	int numnodes = 0;
	node *parent;
	node *child;
	node *left;
	node *right;
};

typedef struct node *nodeptr;

nodeptr min = nullptr;

void initialize(nodeptr, int);
void insert(nodeptr, int);
nodeptr unionheap(nodeptr, nodeptr);
nodeptr link(nodeptr, nodeptr);
nodeptr consolidate(nodeptr);
void decreaseval(nodeptr, int);
void deletenode(nodeptr);

int main () {
	return 0;
}

void initialize(nodeptr node, int data) {
	node = (nodeptr)malloc(sizeof(node));
	node->data = data;
	node->degree = 0;
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
	min->numnodes += 1;
}

nodeptr unionheap(nodeptr h1, nodeptr h2) {
	h1->right->left = h2->left;
	h2->left->right = h1->right;
	h1->left = h2;
	h2->right = h1;
	if(h1->data < h2->data) {
		h1->numnodes += h2->numnodes;
		free(h2);
		return h1;
	}
	else {
		h2->numnodes += h1->numnodes;
		free(h1);
		return h2;
	}
}

nodeptr link(nodeptr n1, nodeptr n2) {
	// n1 smaller key than n2
	n1->right = n2->right;
	n2->right = n1->child;
	n2->left = n1->child->left->left;
	n1->child->left = n2;
	n1->degree += 1;
	n2->mark = false;
	return n1;
}

nodeptr extractmin(nodeptr h) {
	nodeptr z = min;
	if(z != nullptr) {
		nodeptr temp = z;
		do {
			insert(min, temp);
			temp->parent = nullptr;
			temp = temp->right;
		} while(temp->right != z);
		z->left->right = z->right;
		z->right->left = z->left;
		if(z == z->right) {
			min = nullptr;
		}
		else if(min == z->right)
			consolidate(h);
		min->numnodes -= 1;
	}
	return min;
}

nodeptr consolidate(nodeptr h) {
	//too complicated (for now):/
}

void decreaseval(nodeptr node, int key) {
	if(node->data < key)
		return;
	node->data = key;
	if(node != min || node->parent->data < node->data) {
		cut(node, node->parent);
		cascadingcut(node, node->parent);
	}
	if(node->val < min->val)
		min = node;
}

void deletenode(nodeptr node) {
	decreaseval(node, INT_MIN);
	extractmin(min);
}
