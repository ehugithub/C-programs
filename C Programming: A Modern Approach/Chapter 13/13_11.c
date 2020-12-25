#include <stdio.h>
double compute_average_word_length(const char *sentence);

int main() {
  char sentence[100], ch;
  printf("Enter a sentence: ");

  for (int count = 0; ; count++){
    ch = getchar();
    if (ch == '\n') {
      sentence[count] = '\0';
      break;
    }
    sentence[count] = ch;
  }

  printf("Average word length: %.2lf", compute_average_word_length(sentence));
  return 0;
}

double compute_average_word_length(const char *sentence) {
  double total = 0, length = 0, words = 1;
  
  do {
    if (*sentence == ' '){
      total += length - 1;
      length = 0;
      words += 1;
    }
    else if (*sentence == '!' || *sentence == '.' || *sentence == '?')
      continue;
    length++;
  } while(*++sentence);


  return (total + length) / words;
}
