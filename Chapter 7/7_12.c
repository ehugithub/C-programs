#include <stdio.h>
int main() {
  float total, next;
  char ch;
  printf("Enter an expression: ");
  scanf("%f", &total);

  while (ch != '\n') {
    switch (ch) {
      case '+':
        scanf("%f", &next);
        total += next;
        break;
      case '-':
        scanf("%f", &next);
        total -= next;
        break;
      case '/':
        scanf("%f", &next);
        total /= next;
        break;
      case '*':
        scanf("%f", &next);
        total *= next;
        break;

    }
    ch = getchar();
  }

  printf("Value of expression: %.2f", total);



  return 0;
}
