#include <stdio.h>
int main() {
  int N;

  printf("Enter number of numbers: ");
  scanf("%d", &N);
  int num[N];
  printf("Enter %d numbers: ", N);

  for (int i = 0; i < N; i++) scanf("%d", &num[i]);
  printf("In reverse order: ");
  for (int i = N - 1; i >= 0; i--) printf("%d ", num[i]);


  return 0;
}
