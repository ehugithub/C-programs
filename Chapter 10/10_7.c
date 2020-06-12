#include <stdio.h>
#include <stdbool.h>
bool grid[3][40];
int nums[10];
void display_num(void);
void map_digits(void);
int main() {
  char ch;
  bool grid[3][40];
  for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 40; y++)
      grid[x][y] = false;
  }


  printf("Enter a 10 - digit number: ");
  for (int i = 0; i < 10; i++) {
    scanf("%c", &ch);
    nums[i] = ch - '0';
  }
  return 0;
}

void display_num(void) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 40; j++) {
      if (!grid[i][j]) {
        if (j % 2) printf("|");
        else printf("_");
      }

    }
  }
}
