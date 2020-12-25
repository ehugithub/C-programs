#include <stdio.h>
#include <stdlib.h>
struct item {
  char *itemName;
  int qty;
  float price;
  float amount;
};

void readitem(struct item * i);
void printitem(struct item * i);


int main () {
  struct item itm;
  struct item *pitem;
  pitem = &itm;



  pitem -> itemName = (char *) malloc (30 * sizeof(char));
  readitem(pitem);
  printitem(pitem);
  free(pitem -> itemName);


  return 0;
}


void readitem(struct item * i) {
  printf("Enter name: ");
  scanf("%s", i -> itemName);
  printf("\nEnter price: ");
  scanf("%f", &i -> price);
  printf("\nEnter quantity: ");
  scanf("%d", &i -> qty);
  i -> amount = (float)i -> qty * i -> price;
}

void printitem(struct item * i) {
  printf("\nItem name: %s", i -> itemName);
  printf("\nPrice: %.2f", i -> price);
  printf("\nQuantity: %d", i -> qty);
  printf("\nTotal amount: %.2f", i -> amount);
}
