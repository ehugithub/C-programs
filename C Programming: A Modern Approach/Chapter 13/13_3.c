#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
int main () {
  int num, n1, n2;
  bool in_hand[13][4] = {false};
  char *ranks[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
  char *suits[] = {"diamonds", "clubs", "hearts", "spades"};
  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num);

  while (num > 0) {
    n1 = rand() % 13;
    n2 = rand() % 4;


    if(in_hand[n1][n2])
      continue;
    in_hand[n1][n2] = true;
    printf("%s of %s\n", ranks[n1], suits[n2]);
    num--;
  }

  return 0;
}
