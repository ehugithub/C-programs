#include <stdio.h>
int main() {
  int num1, num2, gcf, rem, n1, n2;
  printf("This program simplifies a fraction into lowest terms\n");
  printf("Enter a fraction: ");
  scanf("%d/%d", &num1, &num2);
  n1 = num1;
  n2 = num2;
  for(;;){
    if (n1 == 0) {
      gcf = n2;
      break;
    }
    rem = n2 % n1;
    n2 = n1;
    n1 = rem;
  }
  printf("In lowest terms: %d/%d", num1/gcf, num2/gcf);



  return 0;
}
