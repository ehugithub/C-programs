#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
} *start, *ptr, *new_node;


int main() {
	int n, k, j;
	printf("\nEnter the number of players: ");
	scanf("%d", &n);
	printf("\nEnter the amount of people skipped each time: ");
	scanf("%d", &k);
	start = malloc(sizeof(struct node));
	start->data = 1;
	ptr = start;
	for(int i = 2; i <= n; i++) {
		new_node = malloc(sizeof(struct node));
		ptr->next = new_node;
		new_node->data = i;
		new_node->next = start;
		ptr = new_node;
	}

	for(int j = n; j > 1; j--) {
		for(int l = 0; l < k - 1; ++l)
			ptr = ptr->next;
		ptr->next = ptr->next->next;
	}
	
	printf("\nThe remaining person is player number %d\n", ptr->data);
	return 0;
}
