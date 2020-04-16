#include <stdio.h>
int main() {
  int num, factorial = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  for (int i = num; i > 0; i--) {
    factorial *= i;
  }
  printf("Factorial of %d: %d", num, factorial);

  return 0;
}
