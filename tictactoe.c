#include <stdio.h>
#include <stdbool.h>
int count = 0;
bool turn = true;
char grid[9][17] = {
  {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
  {' ', ' ', '1', ' ', ' ', '|', ' ', ' ', '2', ' ', ' ', '|', ' ', ' ', '3', ' ', ' '},
  {'_', '_', '_', '_', '_', '|', '_', '_', '_', '_', '_', '|', '_', '_', '_', '_', '_'},
  {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
  {' ', ' ', '4', ' ', ' ', '|', ' ', ' ', '5', ' ', ' ', '|', ' ', ' ', '6', ' ', ' '},
  {'_', '_', '_', '_', '_', '|', '_', '_', '_', '_', '_', '|', '_', '_', '_', '_', '_'},
  {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
  {' ', ' ', '7', ' ', ' ', '|', ' ', ' ', '8', ' ', ' ', '|', ' ', ' ', '9', ' ', ' '},
  {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '}
};
void drawboard(void);
int checkWin(void);
void endgame(void);
void restart(void);
void playgame(void);

int main() {
  playgame();
  return 0;
}

void drawboard(void) {
  printf("\n\n\tTic Tac Toe\n");
  printf("Player 1 (X)  -  Player 2 (O)\n\n");
  for (int i = 0; i < 9; i++){
    for (int j = 0; j < 17; j++) {
      printf("%c", grid[i][j]);
      if (j == 16) printf("\n");
    }
  }
}
int checkWin(void){
  if (grid[1][2] == grid[1][8] && grid[1][8] == grid[1][14]) return 1;
  else if (grid[4][2] == grid[4][8] && grid[4][8] == grid[4][14]) return 1;
  else if (grid[7][2] == grid[7][8] && grid[7][8] == grid[7][14]) return 1;
  else if (grid[1][2] == grid[4][2] && grid[4][2] == grid[7][2]) return 1;
  else if (grid[1][8] == grid[4][8] && grid[4][8] == grid[7][8]) return 1;
  else if (grid[1][14] == grid[4][14] && grid[4][14] == grid[7][14]) return 1;
  else if (grid[1][2] == grid[4][8] && grid[4][8] == grid[7][14]) return 1;
  else if (grid[1][14] == grid[4][8] && grid[4][8] == grid[7][2]) return 1;
  else if (count == 9) return 2;
  else return 0;
}
void endgame(void) {
  int num;
  if (checkWin() == 1) {
    printf("Player %d has won!\n", turn ? 2 : 1);
  }
  else if (checkWin() == 2) printf("Tie! Cat's game!\n");
  printf("Play again? (1 for yes, 2 for no): ");
  scanf("%d", &num);
  if (num == 1) {restart(); playgame();}
}
void restart(void) {
  count = 0;
  turn = true;
  grid[1][2] = '1';
  grid[1][8] = '2';
  grid[1][14] = '3';
  grid[4][2] = '4';
  grid[4][8] = '5';
  grid[4][14] = '6';
  grid[7][2] = '7';
  grid[7][8] = '8';
  grid[7][14] = '9';
}
void playgame(void) {
  int x, y;
  char num;
  restart();
  drawboard();
  while (checkWin() == 0) {
    printf("Player %d, enter a number: ", turn ? 1 : 2);
    scanf(" %c", &num);
    switch (num) {
      case '1': x = 1; y = 2; break;
      case '2': x = 1; y = 8; break;
      case '3': x = 1; y = 14; break;
      case '4': x = 4; y = 2; break;
      case '5': x = 4; y = 8; break;
      case '6': x = 4; y = 14; break;
      case '7': x = 7; y = 2; break;
      case '8': x = 7; y = 8; break;
      case '9': x = 7; y = 14; break;
    }
    if (grid[x][y] != num) {
      printf("Invalid move, pease try again. \n");
      continue;
    }

    grid[x][y] = turn ? 'X' : 'O';
    count += 1;
    turn = turn ? false : true;

    drawboard();
  }
  endgame();

}
