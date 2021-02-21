#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//palindrome checker

int main () {
    char str[100];
    bool is = true;

    printf("Enter the string: ");
    gets(str);
    int i = 0, j = strlen(str) - 1;

    while (str[i]) {
        if (str[i] == str[j]) {
            i++;
            j--;
        }
        else {
            is = false;
            break;
        }

    }

    printf("The string %s a palindrome", is ? "is" : "is not");


    return 0;
}

