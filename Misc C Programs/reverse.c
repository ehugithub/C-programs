#include <stdio.h>

int main () {
  int a[10], *p;

  printf("Enter 10 numbers: ");
  for (p = a; p < a + 10; p++)
      scanf("%d", p);


  printf("In reverse order: ");
  for (p = a + 9; p >= a; p--)
    printf(" %d", *p);
  return 0;
}
