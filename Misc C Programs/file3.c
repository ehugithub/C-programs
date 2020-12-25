#include <stdio.h>
#define FILENAME "text.txt"

int main() {
  FILE *fp = NULL;
  int count = 0;

  fp = fopen(FILENAME, "r");
  if (fp == NULL) {
   printf("File does not exist\n");
   return -1;
 }

  fseek(fp, 0, SEEK_END);
  count = ftell(fp);

  for (int i = 0; i <= count; i++) {
    fseek(fp, -i, SEEK_END);
    printf("%c", fgetc(fp));

  }

  fclose(fp);
  fp = NULL;

  return 0;
}
