#include <stdio.h>
#include <stdlib.h>
//deletes given node number from a list
struct node {
	struct node next;
	int num;
};

struct node *delete_node(struct node *, int);

int main() {
	return 0;
}

struct node *delete_node(struct node *start, int num;) {
	struct node *ptr, *ptr2;
	if (num == 1) {
		ptr = start;
		start = start->next;
		free(ptr);
		return start;
	}
	else {
		for (int i = 0; i < num - 2; i++){
			ptr = ptr->next;
			*ptr2 = ptr->next;
			if (ptr2 == NULL)
				break;
			}
		ptr->next = ptr2->next;
		free(ptr2);
		return start;
	}

}
