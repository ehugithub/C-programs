#include <stdio.h>

int main() {
  char sentence[100];
  char ch, *p;
  int num = 0;
  printf("Enter a message: ");

  ch = getchar();
  while (ch != '\n') {
    sentence[num++] = ch;
    ch = getchar();
  }

  printf("Reversal is: ");

  for (p = sentence + num - 1; p >= sentence; p--)
    printf("%c", *p);




  return 0;
}
