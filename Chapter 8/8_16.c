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

  for (int i = 0; i < 26; i++){
    printf("%d", word[i]);
    if (word[i] != 0) {anagram = 1; break;}
  }
  if (anagram == 0) printf("The words are anagrams");
  else printf("The words are not anagrams");
  return 0;
}
