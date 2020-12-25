#include <stdio.h>
int main() {
  int prefix, identifier, code, number, digit;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &number, &digit);

  printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", prefix, identifier, code, number, digit);

  return 0;
}
