#include <stdio.h>
int main() {
  float radius, volume;
  printf("Enter the sphere\'s radius: ");
  scanf("%f", &radius);

  volume = radius*radius*radius*4/3*3.141592653589793238;

  printf("A sphere with a radius of %.1f has a volume of %.1f", radius, volume);

  return 0;
}
