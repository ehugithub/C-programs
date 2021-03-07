#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//linked list

int main () {
    struct node {
        int data;
        struct node *next;
    } ;
    struct node *start = NULL;
    struct node *create(struct node *);
    struct node *display(struct node *);
    struct node *insert_beginning(struct node *);
    struct node *insert_end(struct node *);
    struct node *insert_before(struct node *);
    struct node *insert_after(struct node *);
    struct node *delete_beginning(struct node *);
    struct node *delete_end(struct node *);
    struct node *delete_node(struct node *);
    struct node *delete_after(struct node *);
    struct node *delete_l(struct node *);
    struct node *sort_list(struct node *);

    int main() {
        int option;
        do {
            printf("\n1: Create list");
            printf("\n2: Display list");
            printf("\n3: Add node at beginning");
            printf("\n4: Add node at end");
            printf("\n5: Add node before");
            printf("\n6: Add node after");
            printf("\n7: Delete node at beiginning");
            printf("\n8: Delete node at end");
            printf("\n9: Delete node before");
            printf("\n10: Delete node after");
            printf("\n11: Delete list");
            printf("\n12: Sort list");
            printf("\n13: Exit");
            printf("\nEnter your option: ");
            scanf("%d", &option);
            switch (option) {
                case 1: start = create(start);
                        printf("\nLinked list created");
                        break;
                case 3: start = insert_beginning(start);
                        break;
                case 4: start = insert_end(start);
                        break;
                case 5: start = insert_before(start);
                        break;
                case 6: start = insert_after(start);
                        break;
                case 7: start = delete_beginning(start);
                        break;
                case 8: start = delete_end(start);
                        break;
                case 9: start = delete_before(start);
                        break;
                case 10: start = delete_after(start);
                        break;
                case 11: start = delete_l(start);
                        break;
                case 12: start = sort_list(start);
                        break;
        }
    } while (option != 13);
    return 0;
}
struct node *create(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter -1 to end, enter the data: ");
    scanf("%d", &num);
    while(num != -1) {
        new_node = (struct node*) malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL) {
            new_node->next = NULL;
            start = new_node;
        }

        else {
            ptr=start;
            while(ptr-> != NULL)
            ptr = ptr->next;
            ptr->next = new_node;
            new_node-> = NULL;
        }

        printf("\nEnter the data: ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start) {
    struct node *ptr;
    ptr = startl
    while (ptr != NULL) {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

struct node *insert_beginning(struct node *start) {
    struct node *new_node;
    int num;
    printf("\nEnter the data: ");
    scanf("%d", &num);
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start) {
    struct node *ptr, *new_node;
    int num;
    printf("\nEnter the data: ");
    scanf("%d", &num);
    new_node = (struct node *) malloc (sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;
    ptr = start;
    while(ptr->next != NULL)
    ptr = ptr->next;
    ptr->next = new_node;
    return start;
}

struct node *insert_before(struct node *start) {
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\nEnter the data: ");
    scanf("%d", &val);
    printf("Enter the value before which the data will be inserted: ");
    scanf("%d", &val);
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while (ptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    return start;
}





