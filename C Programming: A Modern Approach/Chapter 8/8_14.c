#include <stdio.h>
int main() {
  char sentence[100];
  char ch, end;
  printf("Enter a sentence: ");
  int first, last;
  //printf("Reversal of a sentence: ");

  ch = getchar();
  for (int i = 0; i < (int) (sizeof(sentence) / (int) sizeof(sentence[0])); i++){
    if (ch == '.' || ch == '!' || ch == '?'){
      end = ch;
      last = i;
      break;
    }
    else sentence[i] = ch;
    ch = getchar();
  }

  for (int i = last; i >= 0; i--){
    if (sentence[i] == ' ' || !i){
      first = i;
      if (!i) printf(" ");
      for (int j = first; j < last; j++)
        printf("%c", sentence[j]);
      last = first;
    }
  }
  printf("%c", end);
  return 0;
}
