#include <stdio.h>
int main() {
  int word[26] = {0};
  int anagram = 0;
  char ch;
  printf("Enter first word: ");
  ch = getchar();
  while(ch != '\n'){
    word[ch - 'a'] += 1;
    ch = getchar();
  }
  printf("Enter second word: ");
  ch = getchar();
  while(ch != '\n'){
    word[ch - 'a'] -= 1;
    ch = getchar();
  }

  for (int i = 0; i < 26; i++) {
    if (word[i] != 0) {anagram = 1; break;}
  }

  printf("The words are %s", !anagram ? "anagrams" : "not anagrams");

  return 0;
}
