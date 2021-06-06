#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


/*Prints the total nubmer of occurrences of a gvien item in the listed list

*/
struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

int printoccurances(struct node *, int);

int main() {
    return 0;
}

int printoccurances(struct node *start, int num) {
    int count = 0;
    struct node *ptr;
    ptr = start;
    while (ptr->next != NULL) {
        if (ptr->data == num)
            count++;
        ptr = ptr->next;
    }
    return count;
}
