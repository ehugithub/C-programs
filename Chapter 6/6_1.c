#include <stdio.h>
int main() {
  float input, largest = 0.0f;
  printf("This program will return the largest number in a series\n");
  printf("Enter a series of numbers, input zero or a negative number to stop\n");
  for (;;){
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input < 0 || input == 0)
      break;
    else if (input > largest)
      largest = input;
  }
  printf("The largest number is %.2f", largest);


  return 0;

}
