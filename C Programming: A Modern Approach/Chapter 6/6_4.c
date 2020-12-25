#include <stdio.h>
int main() {
  int input, sum = 0;
  printf("This program sums a series of intergers\n");

  for (;;){
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &input);
    if (input == 0) break;
    sum += input;
  }
  printf("The sum is: %d", sum);
  return 0;
}
