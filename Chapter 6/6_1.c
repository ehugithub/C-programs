#include <stdio.h>
int main() {
  int input, largest = 0;
  printf("This program will return the largest number in a series\n");
  printf("Enter a series of numbers, input zero or a negative number to stop\n");
  for (;;){
    printf("Enter a number: ");
    scanf("%d", &input);
    if (input < 0 || input == 0)
      break;
    else if (input > largest)
      largest = input;
  }
  printf("The largest number is %d", largest);


  return 0;

}
