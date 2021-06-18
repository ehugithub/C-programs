#include <stdio.h>
#include <malloc.h>
//#include <conio.h>
#include <stdlib.h>
/*circular linked list
special type of list when first element points to last elment and last element points to first element



*/

struct node {
    int data;
    struct node *next;
}*start = NULL;

struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beginning(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beginning(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);

int main() {
    int option;
    do {
        printf("\nMain Menu");
        printf("\n1: Create a list");
        printf("\n2: Display a list");
        printf("\n3: Add a node at the beginning");
        printf("\n4: Add a node at the end");
        printf("\n5: Delete a node from the beginning");
        printf("\n6: Delete a node from the end");
        printf("\n7: Delete a node after a given node");
        printf("\n8: Delete entire list");
        printf("\n9: Exit");
        printf("\nEnter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: start = create(start);
                    printf("\nLinked list created");
                    break;
            case 2: start = display(start);
                    break;
            case 3: start = insert_beginning(start);
                    break;
            case 4: start = insert_end(start);
                    break;
            case 5: start = delete_beginning(start);
                    break;
            case 6: start = delete_end(start);
                    break;
            case 7: start = delete_after(start);
                    break;
            case 8: start = delete_list(start);
                    printf("\nLinked List deleted");
                    break;
        }
    } while (option != 9);
    return 0;
}

struct node *create(struct node *start) {
     struct node *new_node, *ptr;
     int num;
     printf("\nEnter -1 to end");
     printf("\nEnter the data: ");
     scanf("%d", &num);
     while (num != -1) {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;

        if (start == NULL){
            new_node->next = new_node;
            start = new_node;
        }
        else {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = start;
        }
        printf("\nEnter the data: ");
        scanf("%d", &num);
     }
     return start;
}

struct node *display(struct node *start) {
    struct node *ptr;
    ptr = start;
    while (ptr->next != start) {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    
    }
    printf("\n%d", ptr->data);
    return start;
}

struct node *insert_beginning(struct node *start) {
    struct node *ptr, *new_node;
    int num;
    printf("\nEnter the data to be inserted: ");
    scanf("%d", &num);
    ptr = start;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    while(ptr->next != start)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start) {
    struct node *ptr, *new_node;
    int num;
    printf("\nEnter the data to be inserted: ");
    scanf("%d", &num);
    ptr = start;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    while (ptr->next != start)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->next = start;
    return start;
}

struct node *delete_beginning(struct node *start) {
    struct node *ptr;
    ptr = start;
    while (ptr->next != start)
        ptr = ptr->next;
    ptr->next = start->next;
    free(start);
    start = ptr->next;
    return start;
}

struct node *delete_end(struct node *start) {
    struct node *ptr, *preptr;
    ptr = start;
    while (ptr->next != start){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}

struct node *delete_after(struct node *start) {
    struct node *ptr, *preptr;
    int val;
    printf("\n Enter the node after which the node is to be deleted: ");
    scanf("%d", &val);
    ptr = start;
    preptr = ptr;
    for(int i = 0; i < val; i++) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    if (ptr == start)
        start = preptr->next;
    free(ptr);
    return start;
}

struct node *delete_list(struct node *start) {
    struct node *ptr;
    ptr = start;
    while (ptr->next != start)
        start = delete_end(start);
    free(start);
    return start;
}
