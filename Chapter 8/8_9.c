#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int x = 0, y = 0;
  int direction;
  char c = 'B';
  char grid[10][10] = {0};
  srand((unsigned) time(NULL));
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++) grid[i][j] = '.';
  }

  grid[0][0] = 'A';

  while (c < 91) {
    direction = rand() % 4;
    if (direction == 0){
      if (x == 0 || grid[x - 1][y] != '.')
        continue;
      else
        x -= 1;
    }
  else if (direction == 1){
    if (y == 0 || grid[x][y - 1] != '.')
      continue;
    else
      y -= 1;
  }
  else if (direction == 2){
    if (x == 9 || grid[x + 1][y] != '.')
      continue;
    else
      x += 1;
  }
  else if (direction == 3){
    if (y == 9 || grid[x][y + 1] != '.')
      continue;
    else
     y += 1;
  }
  /* if (x = 0 || grid[x - 1][y] != '.' && y == 0 || grid[x][y - 1] != '.'
      && x == 9 || grid[x + 1][y] != '.' && y == 9 || grid[x][y + 1] != '.') break; */
  grid[x][y] = c;
  c++;
}

printf("\n");
for (int i = 0; i < 10; i++){
  for (int j = 0; j < 10; j++) {
    printf(" %c ", grid[i][j]);
    if (j == 9) printf("\n");
    }
  }
}
