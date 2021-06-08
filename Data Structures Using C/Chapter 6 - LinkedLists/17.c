#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


/*calculates average of data values of a linked list

*/
struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
float avg(struct node *);

int main() {
    return 0;
}

float reverse(struct node *start) {
    struct node *ptr;
    ptr = start;
    int total = 0, count = 0;

    while (ptr->next != NULL) {
        total += ptr->data;
        count++;
    }

    return total / count;
}



