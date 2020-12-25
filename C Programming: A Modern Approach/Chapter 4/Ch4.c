#include <stdio.h>
int main() {
  int a, b;
  a = 2;
  b = a * a++;

  printf("%d %d %d", a, b);
  return 0;
}
