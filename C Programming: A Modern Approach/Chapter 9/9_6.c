#include <stdio.h>

double compute(double num);

int main() {
  double input;
  printf("This program computes the value of the polynomial \"3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\"\n");
  printf("Please enter a number for x: ");
  scanf("%lf", &input);
  printf("f(%.2lf) equals %.4lf", input, compute(input));
  return 0;
}

double compute(double num) {
  return ((3 * num * num * num * num * num) + (2 * num * num * num * num)
    - (5 * num * num * num) - (num * num) + (7 * num) - 6);
}
