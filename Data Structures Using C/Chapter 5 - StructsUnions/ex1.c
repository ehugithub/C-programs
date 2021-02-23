#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//declaring strucs

int main () {
    struct name {
        char first[20];
        char middle[20];
        char last[20];
    };

    struct dob {
        int day;
        int year;
        char month [15];
    };

    struct marks {
        int english;
        int math;
        int comp_sci;
    };


    struct student {
        int grade;
        struct names;
        char sex;
        struct dob;
        struct marks;

    };



    return 0;
}

