#include <stdio.h>
int main() {
  int n, sum = 0;
  printf("This program sums a series of integers \nEnter integers (0 to terminate): ");
  scanf("%d", &n);
  while (n != 0) {
    sum += n;
    scanf("%d", &n);
  }

  printf("The sum is: %d\n", sum);
  return 0;
}
