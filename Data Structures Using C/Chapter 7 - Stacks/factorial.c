#include <stdio.h>


int fact(int);


int main () {
	int num;
	printf("Enter your number: ");
	scanf("%d", &num);
	printf("The factorial of %d is %d.\n", num, fact(num));
	return 0;
}

int fact(int n) {
	if (n == 1)
		return 1;
	else
		return n * fact(n - 1);
}
