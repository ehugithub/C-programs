#include <stdio.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2);


int main() {
  char w1[20], w2[20];

  printf("Enter word 1: ");
  scanf("%s", w1);

  printf("Enter word 2: ");
  scanf("%s", w2);

  printf("The words are %s", are_anagrams(w1, w2) ? "not anagrams" : "anagrams");

  return 0;
}

bool are_anagrams(const char *word1, const char *word2) {
  int letter[26] = {0};


  do {
    letter[*word1 - 'a'] += 1;
  } while(*++word1);

  do {
    letter[*word2 - 'a'] -= 1;
  } while(*++word2);

  for (int *i = letter; i < letter + 26; i++) {
    if (*i) return true;
  }

  return false;
}
