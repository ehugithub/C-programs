#include <stdio.h>

//functions performing operations on a  binary search tree

struct node {
	int data;
	struct node *left, *right;
};

struct node *searchtree(struct node *, int);
void insert(struct node *, int); 
void delete(struct node *, int);
struct node *findlargest(struct node *);

int main () {
	
	return 0;
}

struct node *searchtree(struct node *ptr, int num) {
	if (ptr == NULL || ptr->data == num){
		return ptr;
	}
	else {
		if (num < ptr->data)
			return (searchtree(tree->left, num));
		else
			return (searchtree(tree->right, num));
	}
}

void insert(struct node *ptr, int) {
	if (ptr == NULL) {
		ptr = (struct node *)malloc(sizeof(struct node));
		ptr->data = int;
		ptr->left = ptr->right = NULL:
		}
	else {
		if(ptr->data < num)
			insert(ptr->left, num);
		else
			insert(ptr->right, num);
		}	
}

void delete(struct node *ptr, int num) {
	struct node *ptr2
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
		if(ptr->left == NULL && ptr->right = NULL)
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
	while(p-left != NULL && p->right != NULL) {
		if(p->data > count)
			count = p->data;
		findlargest(p->left);
		findlargest(p->right);
	}
	return p;
}
