#include <stdio.h>
#include <ctype.h>

int compute_vowel_count (const char *sentence);


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

int compute_vowel_count (const char *sentence){
  int vowels = 0;
  do {
    if (*sentence == 'A' || *sentence == 'E' || *sentence == 'I' || *sentence =='O' || *sentence == 'a' || *sentence == 'e' || *sentence == 'i' || *sentence == 'o' || *sentence == 'u' || *sentence == 'U')
      vowels += 1;
  } while(*++sentence);

  return vowels;
}
