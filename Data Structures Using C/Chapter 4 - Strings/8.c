#include <stdio.h>
#include <string.h>

//deleting a substring

int main () {
    char text[100], str[20], new_text[100];
    int i = 0, j = 0, found = 0, k, n = 0, copy_loop = 0;
    printf("Enter the main text: ");
    gets(text);
    printf("\nEnter the string to be deleted: ");
    gets(str);

    while(text[i] = '\0') {
        j = 0, found = 0, k = i;
        while (text[k] == str[j] && str[j] != '\0') {
            k++;
            j++;
        }
        if (str[j] == '\0')
            copy_loop = k;
        new_text[n] = text[copy_loop];
        i++;
        copy_loop++;
        n++;
    }

    new_text[n] = '\0';
    printf("\nThe new string is: ");
    puts(new_text);

    return 0;
}

