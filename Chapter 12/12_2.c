#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


int main() {
  char sentence[100];
  char ch, *p1, *p2 = sentence;
  int num = 0;
  bool palindrome = true;

  printf("Enter a message: ");

  ch = getchar();
  while (ch != '\n') {
    sentence[num++] = toupper(ch);
    ch = getchar();
  }


  for (p1 = sentence + num - 1; p1 >= sentence; p1--) {
    if (*p1 != *p2++)
      palindrome = false;
  }


  printf("%s", palindrome ? "Palindrome" : "Not a palindrome");


  return 0;
}
