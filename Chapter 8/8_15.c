#include <stdio.h>
int main() {
  int shift, last;
  char message[80];

  printf("Enter a message to be encrypted: ");
  char ch = getchar();
  for (int i = 0; i < (int) (sizeof(message) / sizeof(message[0])); i++){
    if (ch == '\n') break;
    message[i] = ch;
    last = i;
    ch = getchar();

  }
  printf("Enter shift amount (1 - 25): ");
  scanf("%d", &shift);

  for (int j = 0; j <= last; j++){
    if (message[j] >= 65 && message[j] <= 90)
      message[j] = (message[j] + shift <= 90) ? message[j] + shift : ((message[j] - 'A') + shift) % 26 + 'A';
    else if (message[j] >= 97 && message[j] <= 122)
      message[j] = (message[j] + shift <= 122) ? message[j] + shift : ((message[j] - 'a') + shift) % 26 + 'a';


  }
  printf("Encrypted message: ");
  for (int j = 0; j <= last; j++){
    printf("%c", message[j]);
  }
  return 0;
}
