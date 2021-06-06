#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


/*Merges two linked lists.

*/
struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *merge(struct node *, struct node *);

int main() {
    return 0;
}

struct node *merge(struct node *start1, struct node *start2) {
    struct node *ptr;
    ptr = start1;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = start2;
    return start1;
}

