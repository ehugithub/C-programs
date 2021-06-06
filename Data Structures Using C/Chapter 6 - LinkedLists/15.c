#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


/*Reverses a linked list

*/
struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *reverse(struct node *);

int main() {
    return 0;
}

struct node *reverse(struct node *start) {
    struct node *p1, *p2, *p3;
    p1 = start;
    p2 = p1->next;
    p3 = p2->next;
    p1->next = NULL;

    while (p2->next != NULL) {
        p2->next = p1;
        p1 = p2;
        p2 = p3;
        p3 = p3->next;
        p3->next = p1;
    }

    p2 = start;
    return start;
}
