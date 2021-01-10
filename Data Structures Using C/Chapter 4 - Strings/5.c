#include <stdio.h>
#include <string.h>

//reversing a string

int main () {
    char str[100], reverse_str[100], temp;

    printf("Enter the string: ");
    gets(str);

    int j = strlen(str) - 1;


    for (int i = 0; i < j; i++) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j--;
    }

    printf("The reverse string is: %s", str);

    return 0;
}

