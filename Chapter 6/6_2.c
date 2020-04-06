#include <stdio.h>
int main() {
  int num1, num2, gcf, rem;

  printf("This program finds the GCF between two integer inputs\n");
  printf("Enter two integers, separated by a space: ");
  scanf("%d %d", &num1, & num2);
  for(;;){
    if (num1 == 0) {
      gcf = num2;
      break;
    }
    rem = num2 % num1;
    num2 = num1;
    num1 = rem;

  }
  printf("The GCF between the two numbers is %d", gcf);

  return 0;
}
