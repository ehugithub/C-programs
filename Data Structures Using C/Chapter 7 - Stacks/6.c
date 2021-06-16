#include <stdio.h>

int f(int, int);

int main () {
	int n1, n2;
	printf("Enter input: ");
	scanf("%d %d", &n1, &n2);
	printf("The result is: %d\n", f(n1, n2));
	return 0;
}

int f(int x, int y) {
	if (y <= x)
		return (f((x-y), y) + 1);
	else
		return 0;
}
