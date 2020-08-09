#include <stdio.h>
#include "readline.h"
#include "readline.c"
#include <ctype.h>
#define MAX_LENGTH 20

int read_line(char str[], int n);



int main () {
  for(;;) {
    printf("Enter word: ");

    char *words;
    read_line(words, MAX_LENGTH);

  }
  return 0;
}
