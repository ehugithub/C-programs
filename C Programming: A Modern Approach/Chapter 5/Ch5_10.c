#include <stdio.h>
int main() {
  int grade, tens, ones;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);
  tens = grade / 10;
  switch (tens) {
    case 1: case 2: case 3: case 4: case 5:
      printf("Letter grade: F"); break;
    case 6:
      printf("Letter grade: D"); break;
    case 7:
      printf("Letter grade: C"); break;
    case 8:
      printf("Letter grade: B"); break;
    case 9: case 10:
      printf("Letter grade: A"); break;
  }
  return 0;
}
