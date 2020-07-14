#include <stdio.h>
#include <ctype.h>

int compute_vowel_count (const char *sentence);


int main() {
  char input[100], *p = input;
  int vowels = 0;
  printf("Enter a sentence: ");
  scanf("%s", p);
  printf("Your sentence contains %d vowels", compute_vowel_count(p));
  return 0;
}

int compute_vowel_count (const char *sentence){
  int vowels = 0;
  char *point;
  for (point = sentence; *point != '\0'; point++) {
    *point = toupper(*point);
    if (*point == 'A' || *point== 'E' || *point== 'I' || *point=='O' || *point== 'U')
    vowels += 1;
  }
  return vowels;
}
