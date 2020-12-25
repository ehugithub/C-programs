#include <stdio.h>
#include <stdbool.h>
int main() {
  int nums[10] = {0};
  char ch;
  printf("Enter a number: ");
  ch = getchar();
  while (ch != '\n') {
    nums[ch - '0'] += 1;
    ch = getchar();
  }

  printf("Digit:      0    1    2    3    4    5    6    7    8    9\n");
  printf("Occurances: ");
  for (int i = 0; i <= 9; i++) printf("%d    ", nums[i]);
  return 0;
}
