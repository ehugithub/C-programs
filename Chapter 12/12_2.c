#include <stdio.h>
#include <stdbool.h>


int main() {
  char sentence[100];
  char ch, *p1, *p2 = sentence;
  int num = 0;
  bool palindrome = true;

  printf("Enter a message: ");

  ch = getchar();
  while (ch != '\n') {
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
      if (ch >= 65 && ch <= 90)
        ch += 32;
      sentence[num++] = ch;
    }
    ch = getchar();
  }


  for (p1 = sentence + num - 1; p1 >= sentence; p1--) {
    if (*p1 != *p2++)
      palindrome = false;
  }

  if (palindrome)
    printf("Palindrome");
  else printf("Not a palindrome");


  return 0;
}
