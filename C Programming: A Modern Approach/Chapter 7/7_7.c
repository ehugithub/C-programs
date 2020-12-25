#include <stdio.h>
int main() {
  int top1, bottom1, top2, bottom2, top3, bottom3;
  char op;
  printf("This program performs basic operations on two fractions\n");
  printf("Enter two fractions separated by the operator: (+, -, *, /): ");
  scanf("%d/%d%c%d/%d", &top1, &bottom1, &op, &top2, &bottom2);
  switch (op) {
    case '+':
      bottom3 = bottom1 * bottom2;
      top3 = top1 * bottom2 + top2 * bottom1;
      break;
    case '-':
      bottom3 = bottom1 * bottom2;
      top3 = top1 * bottom2 - top2 * bottom1;
      break;
    case '*':
      top3 = top1 * top2;
      bottom3 = bottom1 * bottom2;
      break;
    case '/':
      top3 = top1 * bottom2;
      bottom3 = top2 * bottom1;
      break;
  }

  printf("The result is %d/%d", top3, bottom3);
  return 0;
}
