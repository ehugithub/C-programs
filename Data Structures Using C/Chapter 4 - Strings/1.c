#include <stdio.h>

//length of a string

int main () {
    char str[100], length = 0;
    printf("Enter a string: ");
    gets(str);

    while(str[length++] != '\0')
        ;
    printf("The length of the string is %d", length - 1);

    return 0;
}

