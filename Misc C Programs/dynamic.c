#include <stdio.h>
#include <stdlib.h>



int main () {
  char *sentence;
  int size;

  printf("Enter length of the sentence: ");
  scanf("%d", &size);

  sentence = (char *) malloc (size * sizeof(char));

  printf("Enter some text: ");
  scanf(" ");
  gets(sentence);
  //fgets(sentence, size, stdin);
  printf("Inputted text is %s", sentence);

  free(sentence);
  return 0;
}
