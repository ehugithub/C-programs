#include <stdio.h>
#include <string.h>

//replacing a substring

int main () {
    char str[200], pat[20], new_str[200], rep_pat[100];
    int i = 0, j = 0, k, n = 0, copy_loop, rep_index = 0;

    printf("Enter the string: ");
    gets(str);
    printf("\nEnter the pattern to be replaced: ");
    gets(pat);
    printf("\nEnter the replacing pattern: ");
    gets(rep_pat);

    while(str[i]) {
        j = 0, k = i;
        while(str[k] == pat[j] && pat[j]) {
            k++;
            j++;
        }
        if(!pat[j]) {
            copy_loop = k;
            while(rep_pat[rep_index]) {
            new_str[n++] = rep_pat[rep_index++];
            }

        }
        new_str[n++] = str[copy_loop++];
        i++;
    }
    new_str[n] = '\0';
    printf("\nThe new string is: %s", new_str);


    return 0;
}

