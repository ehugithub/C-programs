#include <stdio.h>
void encrypt (char *message, int shift);

int main() {
  char input[100];
  int num;

  printf("Enter a message to be encrypted: ");
  scanf("%[^\n]s", input);

  printf("Enter shift amount (1 - 25): ");
  scanf("%d", &num);

  printf("Encrypted message: ");
  encrypt(input, num);
  printf("%s", input);


  return 0;
}

void encrypt (char *message, int shift) {
  do {
    if (*message >= 65 && *message <= 90)
      *message = (*message + shift <= 90) ? *message + shift : ((*message - 'A') + shift) % 26 + 'A';
    else if (*message >= 97 && *message <= 122)
      *message = (*message + shift <= 122) ? *message + shift : ((*message - 'a') + shift) % 26 + 'a';
  } while(*++message);

}
