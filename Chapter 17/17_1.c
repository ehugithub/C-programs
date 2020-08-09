#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define NAME_LEN 25

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} *inventory;


int num_parts = 0, size = 10;
int find_part(int number);
void insert(void);
void search(void);
int read_line (char str[], int n);
void update(void);
void print(void);

int main () {
  char code;

  inventory = (part *) malloc (size * sizeof(inventory));

  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n');

    switch (code) {
      case 'i': insert(); break;
      case 's': search(); break;
      case 'u': update(); break;
      case 'p': print(); break;
      case 'q': return 0;
      default: printf("Illegal code\n");
    }
    printf("\n");
  }
}

int find_part (int number) {
  for (int i = 0; i < num_parts; i++)
    if (inventory[i].number == number)
      return i;
  return -1;
}

void insert(void) {
  int part_number;
  if (num_parts == size) {
    inventory = (part *) realloc(inventory, size * sizeof(inventory));
    printf("Inventory was full, but its size was doubled.\n");
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);

  if (find_part(part_number) >= 0) {
    printf("That part already exists. \n");
    return;
  }

  inventory[num_parts].number = part_number;
  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN);
  printf("Enter quantity: ");
  scanf("%d", &inventory[num_parts].on_hand);
  num_parts++;
}

void search(void) {
  int i, number;
  printf("Enter part number: ");
  scanf("%d", &number);

  i = find_part(number);
  if (i >= 0) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
  }
  else
    printf("Part not found\n");
}


void update(void) {
  int i, number, change;

  printf("Enter part number: ");
  scanf("%d", &number);

  i = find_part(number);

  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventory[i].on_hand += change;
  }
  else printf("Part not found\n");
}

void print(void) {

  printf("Part Number\tPart Name\t\t"
         "Quantity on Hand\n");
  for (int i = 0; i < num_parts; i++)
    printf("%7d\t\t%-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);

}

int read_line (char str[], int n) {
  int ch, i = 0;
  while (isspace(ch = getchar()));
  while (ch != '\n' && ch != EOF) {
    if (i < n)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i;
}
