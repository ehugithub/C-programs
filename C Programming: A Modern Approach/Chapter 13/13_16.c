#include <stdio.h>

void reverse(char *message);

int main() {
  char sentence[100];
  char ch, *p;
  int num = 0;
  printf("Enter a message: ");

  while ((ch = getchar()) != '\n') {
    sentence[num++] = ch;
  }

  printf("Reversal is: ");

  for (p = sentence + num - 1; p >= sentence; p--)
    printf("%c", *p);

  return 0;
}

void reverse(char *message) {
  for (char *p = message + sizeof(message); p > message; p--)
    printf("%c", *p);
}
