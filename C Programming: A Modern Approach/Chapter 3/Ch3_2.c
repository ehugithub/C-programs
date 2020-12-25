#include <stdio.h>
int main() {
  int number, month, day, year;
  float price;


  printf("Enter item number: ");
  scanf("%i", &number);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%.2f\t\t%d/%d/%d", number, price, month, day, year);
  return 0;
}
