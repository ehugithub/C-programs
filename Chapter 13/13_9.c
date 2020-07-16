#include <stdio.h>
#include <ctype.h>

int compute_vowel_count (char *sentence);


int main() {
  char input[100], *p = input;
  char ch;
  printf("Enter a sentence: ");
  for (int count = 0; ; count++){
    ch = getchar();
    if (ch == '\n') {
      input[count] = '\0';
      break;
    }
    input[count] = ch;
  }

  printf("Your sentence contains %d vowels", compute_vowel_count(p));
  return 0;
}

int compute_vowel_count (char *sentence){
  int vowels = 0;
  char *point;
  for (point = sentence; *point != '\0'; point++) {
    *point = toupper(*point);
    if (*point == 'A' || *point == 'E' || *point == 'I' || *point =='O' || *point == 'U')
      vowels += 1;
  }
  return vowels;
}
