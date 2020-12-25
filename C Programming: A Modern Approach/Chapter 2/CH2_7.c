#include <stdio.h>
int main() {
  int amount;
  printf("Enter a dollar amount: ");
  scanf("%i", &amount);

  printf("$20 bills: %i\n", amount / 20);

  amount -= amount / 20 * 20;
  printf("$10 bills: %i\n", amount / 10);
  amount -= amount / 10 * 10;
  printf("$5 bills: %i\n", amount / 5);
  amount -= amount / 5 * 5;
  printf("$1 bills: %i", amount);
  return 0;
}
