#include <stdio.h>
#include <string.h>

//word/char/line counter

int main () {
    char str[1000];
    int i = 0, word_count = 1, line_count = 1, char_count = 0;
    printf("\nEnter a '*' to end");
    printf("\n************");
    printf("\nEnter the text: ");
    scanf("%c", &str[i]);

    while(str[i++] != '*') {
        scanf("%c",&str[i]);
    }
    str[i] = '\0';
    i = 0;
    while (str[i]) {
        if (str[i] == '\n' || i == 79)
            line_count++;
        if(str[i] == ' ' && str[i + 1] != ' ')
            word_count++;
        char_count++;
        i++;
    }
    printf("\nThe total number of words is: %d\nThe total number of lines is: %d\nThe total number of characters is: %d", word_count, line_count, char_count);


    return 0;
}	














