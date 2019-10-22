#include <stdio.h>
int main() {
  int speed;
  printf("Enter wind speed, in knots: ");
  scanf("%d", &speed);

  if (speed < 1)
    printf("Calm");
  else if (1 <= speed && speed <= 3)
    printf("Light air");
  else if (4 <= speed && speed <= 27)
    printf("Breeze");
  else if (28 <= speed && speed <= 47)
    printf("Gale");
  else if (48 <= speed && speed <= 63)
    printf("Storm");
  else
    printf("Hurricane");

  return 0;
}
