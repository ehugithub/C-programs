#include <stdio.h>
#include <ctype.h>
int main() {
  char ch;
  int vowels = 0;
  printf("Enter a sentence: ");

  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch =='O' || ch == 'U')
      vowels += 1;
  }
  printf("Your sentence contains %d vowels", vowels);
  return 0;
}
