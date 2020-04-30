#include <stdio.h>
#include <stdbool.h>
char hand[5][2];
void read_cards (void);
void analyze_hand(void);


int main (void) {
  read_cards();
  analyze_hand();
  return 0;
}

void read_cards(void) {
  bool card_exists[13][4] = {false};
  bool bad_card = false;
  char temp_suit, temp_rank;
  int suit, rank;
  for (int i = 0; i < 5;) {
    printf("Enter a card: ");
    scanf(" %c%c", &temp_rank, &temp_suit);

    switch (temp_rank) {
      case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': rank = temp_rank - '0'; break;
      case 't': case 'T': rank = 10; break;
      case 'j': case 'J': rank = 11; break;
      case 'q': case 'Q': rank = 12; break;
      case 'k': case 'K': rank = 13; break;
      case 'a': case 'A': rank = 14; break;
      default: bad_card = true;
    }

    switch(temp_suit) {
      case 'd': case 'D': suit = 0; break;
      case 'c': case 'C': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default: bad_card = true;
    }

    if (bad_card) {
      printf("Invalid card, ignored\n");
      bad_card = false;
      continue;
    }
    if (card_exists[rank - 2][suit]) {
      printf("Duplicate card, ignored\n");
      continue;
    }

    card_exists[rank - 2][suit] = true;

    hand[i][0] = rank;
    hand[i][1] = suit;
    i++;
    }
  }

  void analyze_hand(void) {
    int straight = 0;
    for (int i = 0; i < 5; i++) {
      if (hand[i][0] == hand[i + 1][0] - 1) straight += 1;
    }
  }
