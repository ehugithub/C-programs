import <stdio.h>

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

