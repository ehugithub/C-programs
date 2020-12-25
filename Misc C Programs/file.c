  #include <stdio.h>
  #define FILENAME "text.txt"


int main() {
  FILE *fp = NULL;
  char ch;
  int lines = 0;

  fp = fopen(FILENAME, "r");
  if (fp == NULL) {
   printf("File does not exist\n");
   return -1;
 }

 while ((ch = fgetc(fp)) != EOF) {
   if (ch == '\n')
    lines++;
 }

 fclose(fp);
 fp = NULL;
 printf("Total number of lines are %d\n", lines);

  return 0;
}
