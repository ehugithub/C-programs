#include <stdio.h>

int strlength(const char *string);

int main () {
  char str[100];
  printf("Enter string to be tested: ");
  scanf("%s", str);
  printf("The string has %d characters", strlength(str));

}

int strlength(const char *string) {
  const char *lastAddress = string;
  while (*lastAddress) {
    ++lastAddress;
  }
  return lastAddress - string;
}
