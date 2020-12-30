#include <stdio.h>

//Student mark tracker

int main () {
    int students, courses, max = -1;
    printf("Input the number of students: ");
    scanf("%d", &students);

    printf("Enter the number of courses for each student: ");
    scanf("%d", &courses);
    int arr[students][courses];

    for (int i = 0; i < students; i++) {
        printf("\nEnter the marks obtained by student %d", i + 1);
        for (int j = 0; j < courses; j++) {
            printf("\nmarks[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int m = 0; m < courses; m++) {
        for (int n = 0; n < students; n++) {
            if (arr[n][m] > max)
                max = arr[n][m];
        }
        printf("\nThe highest marks obtained in subject %d = %d", m + 1, max);
        max = 0;
    }

    return 0;
}


