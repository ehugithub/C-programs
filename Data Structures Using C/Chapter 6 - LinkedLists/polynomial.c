#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


/*sanmple program to perform operations on polynomials using linked lists
*/
struct node {
    int coeff;
    int num;
    struct node *next;
};

struct node *start1 = NULL;
struct node *start2 = NULL;
struct node *start3 = NULL;
struct node *start4 = NULL;
struct node *last3 = NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *add(struct node *, struct node *, struct node *);
struct node *subtract(struct node *, struct node *, struct node *);
struct node *add_node(struct node *, int, int);


int main() {
    do {
        int option;
        printf("\nEnter the first polynomial: 1");
        printf("\nDisplay the first polynomial: 2");
        printf("\nEnter the second polynomial: 3");
        printf("\nDisplay the second polynomial: 4");
        printf("\nAdd the polynomials: 5");
        printf("\nDisplay the result: 6");
        printf("\nSubtract the polynomials: 7");
        printf("\nDisplay the result: 8");
        printf("\nExit: 9");
        printf("\n\n, Enter your option: ");
        scanf("%d", &option);
    }

    switch (option) {
        case 1: start1 = create(start1);
                break;
        case 2: start1 = display(start1);
                break;
        case 3: start2 = create(start2);
                break;
        case 4: start2 = display(start2);
                break;
        case 5: start3 = add(start1, start2, start3);
                break;
        case 6: start3 = display(start3);
                break;
        case 7: start4 = subtract(start1, start2, start3);
                break;
        case 8: start4 = display(start4);
    } while (option != 9);
    return 0;
}

struct node *create(struct node *start) {
	struct node *new_node, *ptr;
	int n, c;
	printf("\nEnter the number: ");
	scanf("%d", %n);
	printf("\nEnter its coefficient: ");
	scanf("%d", &c);
	when (n != -1) {
		if (start == NULL) {
			new_node = (struct node *)malloc(sizeof(struct node));
			new_node->num = n;
			new_node->coeff = c;
			new_node->next = NULL;
			start = new_node;
		}

		else {
			ptr = start;
			while (ptr->next != NULL)
				ptr = ptr->next;
			new_node = (struct node *)malloc(sizeof(struct node));
			new_node->num = n;
			new_node->coeff = c;
			new_node->next = NULL;
			ptr->next = new_node;
		}
		printf("\nEnter the number: ");
		scanf("%d", &n);
		if (n == -1)
			break;
		printf("\tEnter its coefficient: ");
		scanf("%d", &c");
	}
	return start;
}
