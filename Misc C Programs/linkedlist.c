#include <stdio.h>
#include <stdlib.h>

struct node {
  int value; // data stored in the node
  struct node *next; //pointer to the next node
} ;

struct node *add_to_list (struct node *list, int n);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);

int main() {
  struct node *first = NULL;
  struct node *new_node;

  new_node = (struct node *) malloc(sizeof(new_node));
  new_node -> value = 10;
  return 0;
}

struct node *add_to_list (struct node *list, int n) {
  struct node *new_node;
  new_node = (struct node *) malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error\n");
    exit(EXIT_FAILURE);
  }
  new_node -> value = n;
  new_node -> next = list;
  return new_node;
}

struct node *read_numbers(void) {
  struct node *first = NULL;
  int n;
  printf("Enter a series of integers (0 to terminate): ");

  for(;;) {
    scanf("%d", &n);
    if (n == 0)
      return first;
    first = add_to_list(first, n);
  }
}

struct node *search_list(struct node *list, int n) {
  struct node *p;
  for (p = list; p != NULL; p = p-> next) {
    if (p -> value == n)
      return p;
    }
    return NULL;
}

struct node *delete_from_list(struct node *list, int n) {
  struct node *cur, *prev;

  for (cur = list, prev = NULL; cur != NULL && cur -> value != n; prev = cur, cur = cur -> next) {
    if (cur == NULL)
      return list;
    if (prev == NULL)
      list = list -> next;
    else
      prev -> next = cur -> next;
    free (cur);
    return list;
  }
}
