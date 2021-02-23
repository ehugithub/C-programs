#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//read and display

int main () {
    struct student {
        int roll_no;
        char name[30];
        float fees;
        char DOB[80];
    } stud1;


    printf("Enter roll number: ");
    scanf("%d", &stud1.roll_no);
    printf("\nEnter name: ");
    scanf("%s", stud1.name);
    printf("\nEnter the fees: ");
    scanf("%f", & stud1.fees);
    printf("\nEnter the date of birth: ");
    scanf("%s", stud1.DOB);

    printf("\nStudent Details\n");
    printf("ROLL No.: %d", stud1.roll_no);
    printf("\nName: %s", stud1.name);
    printf("\nFees: %.2f", stud1.fees);
    printf("\nDate of birth: %s", stud1.DOB);
    return 0;
}

