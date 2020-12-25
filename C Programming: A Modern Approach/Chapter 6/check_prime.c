#include <stdio.h>
int main() {
  int i, num;

  printf("This program checks if an input is a prime number.\n");
  printf("Please enter a non-negative number: ");
  scanf("%d", &num);

  for (i = 2; i <= num; i++){
    if (num % i == 0)
        break;
  }
  if (num == 1)
    printf("1 is neither a prime nor composite number");
  else if (i < num)
    printf("%d is divisible by %d and not a prime number", num, i);
  else
    printf("%d is a prime number", num);
    
  return 0;
}
