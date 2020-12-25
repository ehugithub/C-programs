#include <stdio.h>
int factorial(int n){
  return n <= 1 ? 1 : n * factorial (n - 1);
}
int main() {
  int num;
  printf("This program returns the factorial of an input.\n");
  printf("Please enter a positive integer: ");
  scanf("%d", &num);

  printf("The factorial of %d is %d", num, factorial(num));
  return 0;
}
