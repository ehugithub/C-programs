#include <stdio.h>
#include <stdbool.h>
int main() {
  char ch, initial1 = '0';
  bool skip = false;
  printf("Enter a first and last name: ");
  ch = getchar();
  while (ch != '\n'){
    if (ch != ' ' && initial1 == '0')
      initial1 = ch;
    else if (ch == ' ' && initial1 !='0' && skip == false)
      skip = true;
    else if (ch != ' ' && initial1 != '0' && skip == true)
      printf("%c", ch);
    ch = getchar();
  }

  printf(", %c.", initial1);

  return 0;
}
