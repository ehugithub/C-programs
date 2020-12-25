#include <stdio.h>
int main() {
  int m1, d1, y1, m2, d2, y2;
  printf("Enter first date: (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);
  printf("Enter second date: (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  if (y2 > y1)
    printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
  else if (y2 == y1) {
    if (m2 > m1)
      printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
    else if (m2 == m1) {
      if (d2 > d1)
        printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
      else if (d2 == d1)
        printf("You have entered the same dates!");
      else
        printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
    }
    else
      printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
  }
  else
    printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
  return 0;
}
