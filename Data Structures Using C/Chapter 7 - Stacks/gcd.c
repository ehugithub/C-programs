#include <stdio.h>

int gcd(int, int);
//calculates gcd of two numbers using euclid's algorithm
int main () {
	int n1, n2;
	printf("Enter the two numbers to find GCD(separated by space): ");
	scanf("%d %d", &n1, &n2);
	printf("The GCD of %d and %d is %d\n", n1, n2, gcd(n1, n2));
	return 0;
}

int gcd (int num1, int num2) {
	if (!(num1%num2))
		return num2;
	else
		return (gcd(num2, num1%num2));

}
