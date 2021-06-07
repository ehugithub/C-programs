#include <stdio.h>
#include <stdlib.h>
// prints number of occurrences of given data value in a linked list
struct node {
	struct node *next;
	int data;
};

int count (struct node *, int);

int main () {
	return 0;
}

int count (struct node *start, int num) {
 int val = 0;
	struct node *ptr;
	ptr = start;
	while (ptr->next != NULL) {
		if (ptr->data = num)
			val++;
		ptr = ptr->next;
	}
	return val;
}
