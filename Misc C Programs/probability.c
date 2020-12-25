#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main() {
  int wins = 0, losses = 0;
  long int times;
  srand((unsigned) time(NULL));
  printf("This game approximates the probability of winning of a game of craps.\n");
  printf("Enter number of simulated games: ");
  scanf("%ld", &times);
  for (int i = 0; i < times; i++)
    if (play_game())
      wins += 1;
    else losses += 1;
  printf("The probability of winning craps is around %.2f%c", ((float) wins * 100/ (wins + losses)), 37);
  return 0;
}

int roll_dice(void){
  return (rand() % 6) + (rand() % 6) + 2;
}

bool play_game(void) {
  int point, num = roll_dice();
  if (num == 7 || num == 11)
    return true;
  else if (num == 2 || num == 3 || num == 12)
    return false;
  else
    point = num;

  for (;;) {
    num = roll_dice();
    if (num == point)
      return true;
    else if (num == 7)
      return false;
  }
}
