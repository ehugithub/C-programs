#include <stdio.h>
#include <ctype.h>
int main() {
  char ch;
  printf("Enter message: ");
  ch = getchar();
  printf("In B1FF-speak: ");
  while (ch != '\n'){
    ch = toupper(ch);
    switch (ch) {
      case 'A': printf("4"); break;
      case 'B': printf("8"); break;
      case 'E': printf("3"); break;
      case 'I': printf("1"); break;
      case 'O': printf("0"); break;
      case 'S': printf("5"); break;
      default: printf("%c", ch);

    }
    ch = getchar();
  }
  printf("!!!!!!!!");
  return 0;
}
