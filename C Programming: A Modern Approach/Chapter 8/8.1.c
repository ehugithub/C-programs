#include <stdio.h>
#include <stdbool.h>
int main() {
  bool repeated1 = false;
  bool repeated[10] = {false};
  bool digit_seen[10] = {false};
  long num;
  int digit;
  printf("Enter a number: ");
  scanf("%ld", &num);
  while (num > 0) {
    digit = num % 10;
    if (digit_seen[digit]) {repeated[digit] = true; repeated1 = true;}
    else (digit_seen[digit] = true);

    num /= 10;


  }
  if (repeated1) {
    printf("Repeated digit(s):");
    for (int i = 0; i < (int) (sizeof(repeated) / sizeof(repeated[0])); i++)
      if (repeated[i]) printf(" %d", i);

  }
  else printf("No repeated digits");
  return 0;
}
