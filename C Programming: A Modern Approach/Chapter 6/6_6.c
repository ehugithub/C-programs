#include <stdio.h>
int main() {
  int num;
  printf("This program displays all even squares between 1 and an input\nPlease enter a positive integer: ");
  scanf("%d", &num);

  for (int i = 1; i*i < num; i++){
    if (i % 2 == 1)
      continue;
    else
      printf("%d\n", i*i);
    if (i*i > num)
      break;
  }

  return 0;
}
