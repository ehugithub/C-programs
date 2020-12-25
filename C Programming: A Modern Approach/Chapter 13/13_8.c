#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main() {
  char str[20], *p = str;
  printf("Enter a word: ");

  scanf("%s", p);


  printf("Scrabble value: %d", compute_scrabble_value(p));
  return 0;
}

int compute_scrabble_value(const char *word) {
  int total = 0;
  char *point;
  for (point = word; *point != '\0'; point++){
    *point = toupper(*point);
    switch (*point) {
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
  }
  return total;
}
