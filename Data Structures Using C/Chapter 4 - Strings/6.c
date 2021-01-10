#include <stdio.h>
#include <string.h>

//extracting a substring

int main () {
    char str[100], substr[100];
    int n, l, j = 0;

    printf("Enter main string: ");
    gets(str);
    printf("Enter the position to start substring: ");
    scanf("%d", &n);

    printf("Enter length of substring: ");
    scanf("%d", &l);

    int i = n;
    while (str[i] && l > 0) {
        substr[j++] = str[i++];
        l--;
    }

    substr[j] = '\0';
    printf("The substring is: ");
    puts(substr);

    return 0;
}

