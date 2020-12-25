#include <stdio.h>

int main() {
  int number = 0;
  int *pnumber = NULL;
  number = 10;
  pnumber = &number;
  printf("number's address: %p\n",  &number);
  printf("number's value: %d\n\n", number);

  printf("pnumber's address: %p\n", &pnumber);
  printf("pnumber's size: %zd bytes\n", (int) sizeof(pnumber));
  printf("pnumber's value: %p\n", pnumber);
  printf("value appointed: %d", *pnumber);
  return 0;
}
