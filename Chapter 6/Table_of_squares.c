#include <stdio.h>
int main() {
  int entries;
  int count = 1;
  printf("This program prints a table of squares.\nEnter number of entries in table: ");
  scanf("%d", &entries);

  while (count <= entries){
    printf("\t\t%d\t\t%d\n", count, count * count);
    count++;
  }
  return 0;
}
