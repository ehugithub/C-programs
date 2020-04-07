#include <stdio.h>
int main() {
  int length = 0;
  printf("Enter a message: ");

  while (getchar() != '\n')
    length++;
  printf("Your message was %d character(s) long.", length);

  return 0;
}
