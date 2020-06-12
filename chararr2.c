#include <stdio.h>
#include <string.h>
 int main () {
   char string[100];
   printf("Enter a string: ");
   scanf("%[^\n]s", string);

   for (int i = strlen(string); i >= 0; i--) printf("%c", string[i]);

   return 0;
 }
