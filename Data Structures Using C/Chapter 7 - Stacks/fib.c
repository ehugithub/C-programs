#include <stdio.h>

int fib(int);

//finds nth term in fibonacci sequence

int main () {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("The %dth term is %d\n", num, fib(num));
	return 0;
}
int fib(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
