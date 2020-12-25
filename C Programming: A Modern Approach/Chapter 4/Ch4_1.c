#include <stdio.h>
int main() {
  int num1, num2;
  printf("Enter a two digit number: ");
  scanf("%c%c", &num1, &num2);

  printf("The reversal is: %c%c", num2, num1);
  return 0;
}
