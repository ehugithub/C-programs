#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "readline.c"

#define MAX_LENGTH 20

int read_line(char str[], int n);
static int strcmp_void(const void *a, const void *b);

int main () {
  char word[MAX_LENGTH + 1];
  char *list[100];
  int i;

  for(i = 0; i < 4; i++) {
    printf("Enter word: ");
    read_line(word, MAX_LENGTH);

    /* if (getchar() == '\n')
      break; */
    printf("%d", strlen(word));
    list[i] = (char *) malloc(strlen(word));
    strcpy(list[i], word);
  }



  qsort(list, i, sizeof(list[0]), strcmp_void);

  for (int j = 0; j < i; j++)
    printf( "%s ", list[j]);
  return 0;
}

static int strcmp_void(const void *a, const void *b)
{
    return strcmp(a, b);
}
