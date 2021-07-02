#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
	int data;
	int balancefactor;
	struct node *left, *right;
};

struct node *search(struct node *, int);
struct node *insert(struct node *, int, bool);
void display(struct node *, int);

int main() {
	return 0;
}

struct node *search(struct node *ptr, int num) {
	if(ptr != NULL) {
		if(ptr->data < num)
			ptr = search(ptr->right, num);
		else if (ptr->data > num)
			ptr = search(ptr->left, num);
	}
	return ptr;
}

struct node *insert(struct node *ptr, int num, bool height) {
	struct node *a, *b;
	if(ptr == NULL) {
		ptr->data = num;
		ptr->left = ptr->right = NULL;
		ptr->balancefactor = 0;
		height = true;
		return ptr;
	}
	else if(num < ptr->data) {
		ptr->left = insert(ptr->left, num, height);
		if(height) {
			switch(ptr->balancefactor) {
				case -1: ptr->balancefactor = 0;
						 height = false;
						 break;
				case 0:	ptr->balancefactor = 1;
						break;
				case 1: a = ptr->left;
						if(a->balancefactor == 1) {
							ptr->left = a->right;
							a->right = ptr;
							ptr->balancefactor = 0;
							a->balancefactor = 0;
							ptr = a;
						}
						else {
							b = a->right;
							a->right = b->left;
							b->left = a;
							ptr->left = b->right;
							b->right = ptr;
							if(b->balancefactor == 1)
								ptr->balancefactor == -1;
							else
								ptr->balancefactor = 0;
							if(b->balancefactor == -1)
								a->balancefactor = 1;
							else
								a->balancefactor = 0;
							b->balancefactor = 0;
							ptr = b;
						}
						height = false;
			}
		}
	}
	else if(num > ptr->data) {
		ptr->right = insert(ptr->right, num, height);
		if(height) {
			switch(ptr->balancefactor) {
				case 1: ptr->balancefactor = 0;
						height = false;
						break;
				case 0: ptr->balancefactor = -1;
						break;
				case -1:
					a = ptr->right;
					if(a->balancefactor == -1) {
						ptr->right = a->left;
						a->left = ptr;
						ptr->balancefactor = 0;
						a->balancefactor = 0;
						ptr = a;
					}
					else {
						b = a->left;
						a->left = b->right;
						b->right = a;
						ptr->right = b->left;
						b->left = ptr;
						if(b->balancefactor == -1)
							ptr->balancefactor = 1;
						else
							ptr->balancefactor = 0;
						if(b->balancefactor == 1)
							a->balancefactor = -1;
						else
							a->balancefactor = 0;
						b->balancefactor = 0;
						ptr = b;
					}
					height = false;
			}
		}
	}
	return ptr;
}

void display(struct node *ptr, int level) {
	if(ptr != NULL) {
		display(ptr->right, level + 1);
		printf("\n");
		for(int i = 0; i < level; i++)
			printf(" ");
		printf("%d", ptr->data);
		display(ptr->left, level + 1);
	}
}
