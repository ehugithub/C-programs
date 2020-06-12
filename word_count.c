#include <stdio.h>

int main() {
  char ch;
  int count = 0;
  do {
    ch = getchar();
    if (ch == ' ') count += 1;
  } while(ch != '\n');
  printf("%d", count);
  return 0;
}
