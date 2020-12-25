#include <stdio.h>
#include <string.h>

int main () {
  char word[21], smallest[21], largest[21];
    printf("Enter word: ");
    scanf("%s", word);
    strcpy(smallest, word);
    strcpy(largest, smallest);

    for(;;) {
      printf("Enter word: ");
      scanf("%s", word);

      if (strlen(word) == 4) break;

      if (strcmp(smallest, word) > 0)
        strcpy(smallest, word);
      else if (strcmp(largest, word) < 0)
        strcpy(largest, word);

    }
    printf("Smallest word: %s\nLargest word: %s", smallest, largest);
}
