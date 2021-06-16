#include<stdio.h>
//program to compute least number of moves to move a given number of disks from ring A to ring C
int hanoi(int);

int main () {
	int n;
	printf("Enter the number of disks that are to be moved: ");
	scanf("%d", &n);
	printf("It would take a minimum of %d move(s) to move %d disk(s)from ring A to ring C\n", hanoi(n), n);
	return 0;
}

int hanoi(int num) {
	if (num == 1)
		return 1;
	else
		return (hanoi(1) + hanoi(num - 1) * 2);


}

