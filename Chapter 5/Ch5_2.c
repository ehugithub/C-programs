#include <stdio.h>
int main() {
  int hour, minute;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  printf("Equivalent 12-hour time: %d:%d %s", (hour < 13) ? hour : hour - 12, minute, (hour < 13) ? "A.M": "P.M");

  return 0;
}
