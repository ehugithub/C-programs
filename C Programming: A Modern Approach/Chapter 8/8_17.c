#include <stdio.h>
int main() {
  int size;
  int x = 0, y;
  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &size);
  y = (size / 2);

  int grid[size][size];
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++)
      grid[i][j] = 0;
  }
  grid[0][y] = 1;
  for (int i = 2; i <= size * size; i++){
    if (x == 0) x = size - 1;
    else x -= 1;
    if (y == size - 1) y = 0;
    else y += 1;

    if (grid[x][y] != 0) {
      if (x == size - 1) x = 1;
      else x += 2;
      if (y == 0) y = size - 1;
      else y -= 1;
      grid[x][y] = i;
    }
    else grid[x][y] = i;

  }


  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++) {
      printf("   %d   ", grid[i][j]);
      if (j == size - 1) printf("\n");
    }
  }


  return 0;
}
