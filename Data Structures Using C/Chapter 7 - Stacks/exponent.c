#include <stdio.h>

int power(int, int);
// calculates exponenent of a number


int main () {
	int num, exp;
	printf("Enter the number and the power to be evaluated: ");
	scanf("%d %d", &num, &exp);
	printf("%d^%d = %d\n", num, exp, power(num, exp));
	return 0;
}

int power(int n1, int n2) {
	if (n2 == 0)
		return 1;
	else
		return (n1 * power(n1, n2 -1));


}
