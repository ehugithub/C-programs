#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void reverse_name (char *name);


int main() {
  char input[50], *p = input;

  printf("Enter a name: ");
  scanf("%s", p);

  reverse_name(p);


  /* char ch, initial1 = '0';
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

  printf(", %c.", initial1); */

  return 0;
}

void reverse_name (char *name) {
  char *point = name + strlen(name), *space;

  /* for(;;) {
    if (*point-- == ' ') {space = point; break;}
  }

  while(*space++) printf("%c, ", *space); */



}
