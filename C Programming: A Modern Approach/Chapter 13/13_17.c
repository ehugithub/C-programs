#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_palindrome(const char *message);

int main() {
  char sentence[100];

  printf("Enter a message: ");
  scanf("%[^\n]s", sentence);

  printf("%s", is_palindrome(sentence) ? "Palindrome" : "Not a palindrome");
}

bool is_palindrome(const char *message) {
  char *p1;
  for (p1 = message + strlen(message) - 1; p1 >= message; p1--) {
    if (toupper(*p1) != toupper(*message++))
      return false;
    }
  return true;
}
