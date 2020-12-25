#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main() {
  char input;
  int wins = 0, losses = 0;
  srand((unsigned) time(NULL));
  do {
    if (play_game())
      wins += 1;
    else losses += 1;
    printf("Play again? ");
    scanf("%c", &input);
    fflush(stdin);
  } while(input == 'y' || input == 'Y');
  printf("Wins: %d\tLosses: %d", wins, losses);
  return 0;
}

int roll_dice(void){
  return (rand() % 6) + (rand() % 6) + 2;
}

bool play_game(void) {
  int point, num = roll_dice();
  printf("You rolled: %d\n", num);
  if (num == 7 || num == 11) {
    printf("You win!\n");
    return true;
  }
  else if (num == 2 || num == 3 || num == 12) {
    printf("You lose!\n");
    return false;
  }
  else {
    point = num;
    printf("Your point is %d \n", point);
  }

  for (;;) {
    num = roll_dice();
    printf("You rolled: %d\n", num);
    if (num == point) {
      printf("You win!\n");
      return true;
    }
    else if (num == 7) {
      printf("You lose!\n");
      return false;
    }
  }
}
