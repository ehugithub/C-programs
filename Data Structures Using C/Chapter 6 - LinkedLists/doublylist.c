#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <malloc.h>

/* algorithm for doubly linked list
special type of list that contains pointer to the next node as well as the previous node



prev field of first node and next field of last node will be null
makes searching twice as efficient (searching forward and back)
*/

struct node {
    struct node *prev;
    struct node *next;
    int data;
} ;

struct node *start = NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_after(struct node *);
struct node *delete_before(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_list(struct node *);

int main () {
    int option;
        do {
        printf("\n1: Create a list");
        printf("\n2: Display the list");
        printf("\n3: Add a node at the beginning");
        printf("\n4: Add a node to the end");
        printf("\n5: Add a node before a given node");
        printf("\n6: Add a node after a give n node");
        printf("\n7: Delete a node from the beginning");
        printf("\n8: Delete a node from the end");
        printf("\n9: Delete a node before a given node");
        printf("\n10: Delete a node after a given node");
        printf("\n11: Delete the list");
        printf("\n12: Exit \n");
        scanf("%d", &option);

        switch (option) {
            case 1: start = create(start);
                    printf("\nList created");
                    break;
            case 2: start = display(start);
                    break;
            case 3: start = insert_beg(start);
                    break;
            case 4: start = insert_end(start);
                    break;
            case 5: start = insert_before(start);
                    break;
            case 6: start = insert_after(start);
                    break;
            case 7: start = delete_beg(start);
                    break;
            case 8: start = delete_end(start);
                    break;
            case 9: start = delete_before(start);
                    break;
            case 10: start = delete_after(start);
                    break;
            case 11: start = delete_list(start);
                    printf("Linked list created");
                    break;
        }
    } while (option != 12);
    return 0;
}

struct node *create(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the data: ");
    scanf("%d", &num);
    while (num != -1) {
        if (start == NULL) {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->prev = NULL;
            new_node->data = num;
            new_node->next = NULL;
            start = new_node;
        }
        else {
            ptr = start;
            new_node = (struct node*)malloc(sizeof(struct node));
            new_node->data = num;
            while(ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node ->next = NULL;
        }
        printf("\nEnter the data: ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start) {
    struct node *ptr;
    ptr = start;
    while (ptr != NULL) {
        printf("\n%d", ptr->data);
	ptr = ptr->next;
    }
    return start;
}

struct node *insert_beg(struct node *start) {
    struct node *new_node;
    int num;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("&d", &num);
    new_node->data = num;
    new_node->prev = NULL;
    new_node->next = start;
    start->prev = new_node;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start) {
    struct node *ptr, *new_node;
    int num;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("&d", &num);
    new_node->data = num;
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = NULL;
    return start;
}

struct node *insert_before(struct node *start) {
    struct node *ptr, *new_node;
    int num, val;
    printf("\nEnter the position of the node to be inserted before: ");
    scanf("&d", &val);
    printf("\nEnter the data;");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr = start;
    for (int i = val; i < val; i++)
        ptr = ptr->next;
    new_node->next = ptr;
    new_node->data = num;
    new_node->prev = ptr->prev;
    ptr->prev->next = new_node;
    ptr->prev = new_node;
    return start;
}

struct node *insert_after(struct node *start) {
    struct node *ptr, *new_node;
    int num, val;
    printf("\nEnter the position of the node to be inserted after: ");
    scanf("&d", &val);
    printf("\nEnter the data;");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr = start;
    for (int i = val; i < val; i++)
        ptr = ptr->next;
    new_node->prev = ptr;
    new_node->data = num;
    new_node->next = ptr->next;
    ptr->next->prev = new_node;
    ptr->next = new_node;
    return start;
}

struct node *delete_beg(struct node *start) {
    struct node  *ptr;
    ptr = start;
    start = start->next;
    start->prev = NULL;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start) {
    struct node *ptr;
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->prev->next = NULL;
    free(ptr);
    return start;
}

struct node *delete_after(struct node *start) {
    struct node *ptr, *temp;
    int val;
    printf("nEnter the position of the node to be deleted before: ");
    scanf("%d", &val);
    ptr = start;
    for (int i = val; i < val; i++)
        ptr = ptr->next;
    temp = ptr->next;
    ptr->next = temp->next;
    temp->next->prev = ptr;
    free (temp);
    return start;
}

struct node *delete_before(struct node *start) {
    struct node *ptr, *temp;
    int val;
    printf("nEnter the position of the node to be deleted after: ");
    scanf("%d", &val);
    ptr = start;
    for (int i = val; i < val; i++)
        ptr = ptr->next;
    temp = ptr->prev;
    if (temp == start)
        start = delete_beg(start);
    else {
        ptr->prev = temp->prev;
        temp->prev->next = ptr;
    }
    free(temp);
    return start;
}

struct node *delete_list (struct node *start) {
    while (start != NULL)
        start = delete_beg(start);
    return start;
}



