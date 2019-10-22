#include <stdio.h>
int main() {
  int num1, num2, num3;
  printf("Enter a three digit number: ");
  scanf("%c%c%c", &num1, &num2, &num3);

  printf("The reversal is: %c%c%c", num3, num2, num1);
  return 0;
}
