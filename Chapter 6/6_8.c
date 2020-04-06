#include <stdio.h>
int main() {
  int days, start;

  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
  scanf("%d", &start);

  printf("Sun Mon Tue Wed Thu Fri Sat\n");

  for (int j = 1; j <= start; j++){
    printf("    ");
  }
  for (int i = 1; i <= days; i++) {
    if ((start + i - 1) % 7 == 0)
      printf("\n");
    if (i / 10 ==0)
      printf(" %d  ", i);
    else printf(" %d ", i);

  }


  return 0;
}
