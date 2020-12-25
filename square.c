#include <stdio.h>

int square (int * const x);

int main() {
  int num, *p;
  p = &num;
  printf("Enter an integer: ");
  scanf("%d", p);

  printf("%d squared is %d", num, square(p));
  return 0;
}

int square (int * const x) {
  return *x * *x;
}
