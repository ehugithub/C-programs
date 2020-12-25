#include <stdio.h>

int main () {
  char one = '0', ten;
  char *tens[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  char *teens[]= {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

  printf("Enter a two-digit number: ");
  scanf("%c%c", &ten, &one);

  printf("You entered the number: ");



  if (ten - '0' == 1)
    printf("%s", teens[one - '1']);
  else
   printf("%s %s", tens[ten - '2'], ones[one - '0']);
  return 0;
}
