#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


/*Program that removes all nodes that have duplicate information

*/
struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *delete_node(struct node *, int);
struct node *after(struct node *, int);
struct node *delete_beginning(struct node *);

int main() {
    return 0;
}

struct node *remove_duplicates(struct node *start) {
    struct node *p1, *p2;
    while (p1->next->next != NULL) {
        p2 = p1->next;
        while (p2->next != NULL) {
            if (p1->data = p2->data)
                start = delete_node(start, p2->data);
            p2 = p2->next;
        }
        p1 = p1->next;
    }

    return start;
}

struct node *delete_beginning(struct node *start) {
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

struct node *delete_node(struct node *start, int num) {
    struct node *ptr, *preptr;
    ptr = start;
    if (ptr->data == num) {
        start = delete_beginning(start);
        return start;
    }

    else {
	while(ptr->data != num) {
	    preptr = ptr;
	    ptr = ptr->next;
	}
	preptr->next = ptr->next;
	free(ptr);
	return start;
    }
}

