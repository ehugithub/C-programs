#include <stdio.h>
int main() {
  int n;
  float sum = 1, factorial = 1;
  printf("This program approximates the value of e with its taylor series.\n");
  printf("Please enter an the number of terms (n): ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      factorial *= j;
    }
    sum += (1 / factorial);
    factorial = 1;
  }
  printf("e is approximately equal to %.20f", sum);


  return 0;
}
