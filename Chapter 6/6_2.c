#include <stdio.h>
int main() {
  int num1, num2, gcf, rem;

  printf("This program finds the GCF between two integer inputs\n");
  printf("Enter two integers, separated by a space: ");
  scanf("%d %d", &num1, & num2);
  for(;;){
    if (num1 == 0 || num2 == 0)
      if (num1 == 0)
        num2 = gcf;
      else
        num1 = gcf;
      break;
    if (num1 > num2)
      rem = num1 % num2;
      num2 = num1;
      rem = num2;
  }
  printf("The GCF between the two numbers is %d", gcf);

  return 0;
}
