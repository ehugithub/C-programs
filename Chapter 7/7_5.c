#include <stdio.h>
#include <ctype.h>
int main() {
  char ch;
  int total = 0;
  printf("Enter a word: ");
  ch = getchar();
  while (ch != '\n'){
    ch = toupper(ch);
    switch (ch) {
      case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
        total += 1; break;
      case 'D': case 'G':
        total += 2; break;
      case 'B': case 'C': case 'M': case 'P':
        total += 3; break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
       total += 4; break;
      case 'K':
        total += 5; break;
      case 'J': case 'X':
        total += 8; break;
      case 'Q': case 'Z':
        total += 10; break;
    }
    ch = getchar();
  }

  printf("Scrabble value: %d", total);
  return 0;
}
