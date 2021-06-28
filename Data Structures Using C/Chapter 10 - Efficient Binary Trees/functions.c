#include <stdio.h>
#include <stdlib.h>
//functions performing operations on a binary search tree

struct node {
	int data;
	struct node *left, *right;
};

void create(struct node *);
struct node *searchtree(struct node *, int);
void insert(struct node *, int); 
void delete(struct node *, int);
struct node *findlargest(struct node *);
int find_height(struct node *);
int total_nodes(struct node *);
int totalinternalnodes(struct node *);
int totalexternalnodes(struct node *);
void mirrorimage(struct node *);
struct node *smallest_node(struct node *);
struct node *largest_node(struct node *);
void deletetree(struct node *);

int main () {
	
	return 0;
}

void create(struct node *ptr) {
	ptr = NULL;
}

struct node *searchtree(struct node *ptr, int num) {
	if (ptr == NULL || ptr->data == num){
		return ptr;
	}
	else {
		if (num < ptr->data)
			return (searchtree(ptr->left, num));
		else
			return (searchtree(ptr->right, num));
	}
}

void insert(struct node *ptr, int num) {
	if (ptr == NULL) {
		ptr = (struct node *)malloc(sizeof(struct node));
		ptr->data = num;
		ptr->left = ptr->right = NULL;
		}
	else {
		if(ptr->data < num)
			insert(ptr->left, num);
		else
			insert(ptr->right, num);
		}	
}

void delete(struct node *ptr, int num) {
	struct node *ptr2;
	if(ptr == NULL)
		printf("Tree is empty or given input is not found in tree\n");
	else if(ptr->data > num)
		delete(ptr->left, num);
	else if(ptr->data < num)
		delete(ptr->right, num);
	else if(ptr->left != NULL && ptr->right != NULL) {
		ptr2 = findlargest(ptr->left);
		ptr->data = ptr2->data;
		delete(ptr->left, ptr2->data);
	}
	else {
		ptr2 = ptr;
		if(ptr->left == NULL && ptr->right == NULL)
			ptr = NULL;
		else if (ptr->left != NULL)
			ptr = ptr->left;
		else
			ptr = ptr->right;
	}
	free(ptr2);
}

struct node *findlargest(struct node *p) {
	int count = 0;
	while(p->left != NULL && p->right != NULL) {
		if(p->data > count)
			count = p->data;
		findlargest(p->left);
		findlargest(p->right);
	}
	return p;
}

int find_height(struct node *ptr) {
	int left, right;
	if(ptr == NULL)
		return 0;
	else {
		left = find_height(ptr->left);
		right = find_height(ptr->right);
		if(left > right)
			return left + 1;
		else 
			return right + 1;
	}
}

int total_nodes(struct node *ptr) {
	if(ptr == NULL)
		return 0;
	else
		return (total_nodes(ptr->left) + total_nodes(ptr->right) + 1);

}

int totalinternalnodes(struct node *ptr) {
	if(ptr == NULL)
		return 0;
	if(ptr->left != NULL && ptr->right != NULL)
		return (totalinternalnodes(ptr->left) + totalinternalnodes(ptr->right) + 1);
	else
		return 0;
}

int totalexternalnodes(struct node *ptr) {
	if(ptr == NULL)
		return 0;
	if(ptr->left != NULL && ptr->right != NULL)
		return (totalexternalnodes(ptr->left) + totalexternalnodes(ptr->right));
	else
		return 1;
}

void mirrorimage(struct node *ptr) {
	struct node *temp;
	if(ptr != NULL) {
		mirrorimage(ptr->left);
		mirrorimage(ptr->right);
		temp = ptr->left;
		ptr->left = ptr->right;
		ptr->right = temp;
	}
}

struct node *smallest_node(struct node *ptr) {
	if(ptr == NULL || ptr->left == NULL)
		return ptr;
	else
		return smallest_node(ptr->left);
}

struct node *largest_node(struct node *ptr) {
	if (ptr == NULL || ptr->right == NULL)
		return ptr;
	else
		return largest_node(ptr->right);
}

void deletetree(struct node *ptr) {
	if(ptr != NULL) {
		deletetree(ptr->left);
		deletetree(ptr->right);
		free(ptr);
	}
}
