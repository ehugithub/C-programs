#include <stdio.h>
#include <ctype.h>
int main() {
  char ch;
  int space = 1, length = 0, total = 0;
  float avg;
  printf("Enter a sentence: ");

  while ((ch = getchar()) != '\n') {
    switch (ch) {
      case '.': case '!': case '?': break;
      case ' ': total += length; length = 0; space += 1; break;
      default: length += 1; break;
    }
  }

  avg = (total + length) / (float) space;
  printf("Average word length: %.2f", avg);
  return 0;
}
