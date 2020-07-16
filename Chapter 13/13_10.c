#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void reverse_name (char *first, char *last);


int main() {
  char name1[20], name2[20], *p1 = name1, *p2 = name2;

  printf("Enter a name: ");
  scanf("%s%s", p1, p2);

  reverse_name(p1, p2);

  return 0;
}

void reverse_name (char *first, char *last) {
  char *point;

  for (point = last; *point != '\0'; point++) {
    if (*point == ' ')
     break;
    printf("%c", *point);
  }

  printf(", ");
  point = first;
  do {
    printf("%c", *point);
  } while(*point == ' ');

  printf(".");



}
