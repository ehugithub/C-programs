#include <stdio.h>
#include <string.h>

//sorting names

int main () {
    char temp[10];
    int i, n, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();

    char names[n][20];



    for(i = 0; i < n; i++) {
        printf("\nEnter the name of student %d: ", i + 1);
        gets(names[i]);
    }

    for(i = 0; i < n; i++) {
        for( j = 0; j < n - 1; j++) {
            if(strcmp(names[j], names[j+1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nNames of the students in alphabetical order are:\n");

    for(i = 0; i < n; i++)
        puts(names[i]);

    return 0;
}


