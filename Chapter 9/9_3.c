#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
int main() {
  char grid[10][10] = {0};
  generate_random_walk(grid);
  print_array(grid);
}

void print_array(char walk[10][10]) {
  printf("\n");
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++) {
      printf(" %c ", walk[i][j]);
      if (j == 9) printf("\n");
      }
    }
}

void generate_random_walk(char walk[10][10]) {
  int x = 0, y = 0;
  int direction;
  char c = 'B';
  srand((unsigned) time(NULL));
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++) walk[i][j] = '.';
  }
  walk[0][0] = 'A';
  while (c < 91) {
    direction = rand() % 4;
    if ((x == 0 || walk[x - 1][y] != '.') && (y == 0 || walk[x][y - 1] != '.') && (x == 9 || walk[x + 1][y] != '.') && (y == 9 || walk[x][y + 1] != '.')) break;
    if (direction == 0){
      if (x == 0 || walk[x - 1][y] != '.')
        continue;
      else
        x -= 1;
    }
  else if (direction == 1){
    if (y == 0 || walk[x][y - 1] != '.')
      continue;
    else
      y -= 1;
  }
  else if (direction == 2){
    if (x == 9 || walk[x + 1][y] != '.')
      continue;
    else
      x += 1;
  }
  else if (direction == 3){
    if (y == 9 || walk[x][y + 1] != '.')
      continue;
    else
     y += 1;
  }
  walk[x][y] = c;
  c++;
}
}
