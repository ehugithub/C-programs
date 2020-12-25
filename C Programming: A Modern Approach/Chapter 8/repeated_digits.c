#include <stdio.h>
#include <stdbool.h>
int main() {
  bool digit_seen[10] = {false};
  long num;
  int digit;
  printf("Enter a number: ");
  scanf("%ld", &num);
  while (num > 0) {
    digit = num % 10;
    if (digit_seen[digit]) break;
    else (digit_seen[digit] = true);

    num /= 10;


  }
  if (num > 0) printf("Repeated digit(s)");
  else printf("No repeated digits");
  return 0;
}
