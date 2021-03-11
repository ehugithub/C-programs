#include <stdio.h>

//circular linked list


struct node {
    int data;
    struct node *next;
}*start = NULL;

struct node *create(struct node *);
struct node *display(struct node *);
struct *insert_beginning(struct node *);
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
        printf("\n5: Delete a node form the beginning");
        printf("\n6: Delete a node form the end");
        printf("\n7: Delete a node after a given node");
        printf("\n8: Delete entire list");
        printf("\n9: Exit");
        printf("\nEnter your option: ");
        scanf("%d", &option);

        swithc (option) {
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

