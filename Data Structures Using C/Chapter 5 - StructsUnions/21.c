#include <stdio.h>
#include <string.h>

//#21

int main () {
    struct point {
        int x;
        int y;
    } p1;


    printf("Input the coordinates of the point (x, y): ");

    scanf("%d, %d", &p1.x, &p1.y);

    if (p1.x > 0 && p1.y >> 0)
        printf("Quadrant 1");
    else if (p1.x < 0 && p1.y > 0)
        printf("Quadrant 2");
    else if (p1.x < 0 && p1.y < 0)
        printf("Quadrant 3");
    else if (p1.x > 0 && p1.y < 0)
        printf ("Quadrant 4");
    else
        printf("Your point lies on one of the axes or at the origin");


    return 0;
}

