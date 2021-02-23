#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//complex numbers

int main () {
    struct complex {
        int real;
        int imag;
    } c1, c2, sum_c, sub_c;

    int option;

    do {
        printf("\nMain Menu");
        printf("\n 1. Read the complex numbers");
        printf("\n 2. Display the complex numbers");
        printf("\n 3. Add the complex numbers");
        printf("\n 4. Subtract the complex numbers");
        printf("\n 5. Exit");

        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter the real and imaginary parts of the first number:");
                scanf("%d %d", &c1.real, &c1.imag);
                printf("\nEnter the real and imaginary parts of the second number:");
                scanf("%d %d", &c2.real, &c2.imag);
                break;
            case 2:
                printf("\nThe first complex number is: %d + %di", c1.real, c1.imag);
                printf("\nThe second complex number is: %d + %di", c2.real, c2.imag);
                break;
            case 3:
                sum_c.real = c1.real + c2.real;
                sum_c.imag = c1.imag + c2.imag;
                printf("\n The sum of two complex number is: %d + %di", sum_c.real, sum_c.imag);
                break;
            case 4:
                sub_c.real = c1.real + c2.real;
                sub_c.imag = c1.imag + c2.imag;
                printf("\n The difference of two complex number is: %d + %di", sub_c.real, sub_c.imag);
                break;
        }
    } while (option != 5);



    return 0;
}

