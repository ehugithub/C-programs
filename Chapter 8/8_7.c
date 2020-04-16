#include <stdio.h>
int main() {
  int sum = 0;
  int nums[5][5] = {0};
  printf("Enter row 1: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &nums[0][i]);
  printf("Enter row 2: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &nums[1][i]);
  printf("Enter row 3: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &nums[2][i]);
  printf("Enter row 4: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &nums[3][i]);
  printf("Enter row 5: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &nums[4][i]);

  printf("Row totals: ");
  for (int i = 0; i < 5 ; i++){
    for (int j = 0; j < 5; j++){
      sum += nums[i][j];
      if (j == 4) {printf("%d ", sum); sum = 0;}
    }
  }
  printf("Column totals: ");
  for (int i = 0; i < 5 ; i++){
    for (int j = 0; j < 5; j++){
      sum += nums[j][i];
      if (j == 4) {printf("%d ", sum); sum = 0;}
    }
  }
  return 0;
}
