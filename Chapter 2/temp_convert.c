#include <stdio.h>
int main () {
  float fahrenheit, celsius;
  printf("Please input Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);

  celsius =(fahrenheit - 32)*5/9;
  printf("Your temperature in Celsius is %.1f", celsius);
  return 0;
}
