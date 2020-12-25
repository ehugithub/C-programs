#include <stdio.h>
#include <stdbool.h>

int len(char str1[]);
void cat(char result[], char str1[], char str2[]);
bool compare(char str1[], char str2[]);

int main() {
  char st1[] = "hello";
  char st2[] = "hello";
  //char str3[213];
  printf("%d", compare(st1, st2));
  return 0;
}

int len(char str1[]) {
  int length = 0;
  for(int i = 0; str1[i] != '\0'; i++) length++;
  return length;
}

void cat(char result[], char str1[], char str2[]) {
  int len = 0;
  for (int i = 0; str1[i] != '\0'; i++) {
    result[i] = str1[i];
    len += 1;
  }
  for (int j = 0; str2[j] != '\0'; j++) result[len + j] = str2[j];
}

bool compare(char str1[], char str2[]) {
  for (int i = 0, j = 0; ;i++, j++) {
    if (str1[i] != str2[j]) return false;
    if (str1[i] == '\0' || str2[j] == '\0') return true;
  }
}
