#include <stdio.h>
int main() {
  int top1, top2, bottom1, bottom2, top3, bottom3;
  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &top1, &bottom1, &top2, &bottom2);

  bottom3 = bottom1 * bottom2;
  top3 = top1 * bottom2 + top2 * bottom1;

  printf("The sum is %d/%d", top3, bottom3);


  return 0;
}
