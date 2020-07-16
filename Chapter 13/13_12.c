#include <stdio.h>
int main() {
  char sentence[30][20];
  char ch;
  int word = 0, count;
  sentence[0][0] = ' ';

  printf("Enter a sentence: ");
  for (count = 1; ; count++) {
    ch = getchar();
    if (ch == ' ' || ch == '\n') {
      sentence[word][count] = '\0';
      count = 0;
      word++;
      if (ch == '\n')
        break;
    }
    sentence[word][count] = ch;
  }

  for (int i = word; i >= 0; i--) {
    for (int j = 0; sentence[i][j] != '\0'; j++) {
      printf("%c", sentence[i][j]);
    }
  }
  return 0;
}
