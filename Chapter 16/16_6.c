#include <stdio.h>


struct date {
  int month;
  int date;
  int year;
} i1, i2;

int compare_dates(struct date d1, struct date d2);

int main () {
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &i1.month, &i1.date, &i1.year);
  printf("Enter a second date: ");
  scanf("%d/%d/%d", &i2.month, &i2.date, &i2.year);

  printf("%d/%d/%d is ", i1.month, i1.date, i1.year);
  if (compare_dates(i1, i2) == -1)
    printf("earlier than ");
  else if (!compare_dates(i1, i2))
    printf("the same date as ");
  else
    printf("later than ");

  printf("%d/%d/%d", i2.month, i2.date, i2.year);


}

int compare_dates(struct date d1, struct date d2) {
  if (d1.year < d2.year)
    return -1;
  else if (d1.year > d2.year)
    return 1;
  if (d1.month < d2.month)
    return -1;
  else if (d1.month > d2.month)
    return 1;
  if (d1.date < d2.date)
    return -1;
  else if (d1.date > d2.date)
    return 1;

  return 0;
}
