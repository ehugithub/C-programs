#include <stdio.h>
#include <string.h>

//inserting a substring

int main () {
    char text[100], str[20], ins_text[100];
    int i = 0, j = 0, k = 0, pos;

    printf("Enter the main text: ");
    gets(text);
    printf("\nEnter the string to be inserted: ");
    gets(str);

    printf("\nEnter the position at which the string is to be inserted: ");
    scanf("%d", &pos);

    while (text[i] != '\0') {
        if (i == pos) {
            while(str[k] != '\0') {
                ins_text[j++] = str[k++];
            }
        }
        else {
            ins_text[j++] = text[i];
        }
        i++;
    }


    ins_text[j] = '\0';
    printf("\nThe new string is: ");
    puts(ins_text);

    return 0;
}#include <stdio.h>
#include <string.h>

//inserting a substring

int main () {
    char text[100], str[20], ins_text[100];
    int i = 0, j = 0, k = 0, pos;

    printf("Enter the main text: ");
    gets(text);
    printf("\nEnter the string to be inserted: ");
    gets(str);

    printf("\nEnter the position at which the string is to be inserted: ");
    scanf("%d", &pos);

    while (text[i] != '\0') {
        if (i == pos) {
            while(str[k] != '\0') {
                ins_text[j++] = str[k++];
            }
        }
        else {
            ins_text[j++] = text[i];
        }
        i++;
    }


    ins_text[j] = '\0';
    printf("\nThe new string is: ");
    puts(ins_text);

    return 0;
}
