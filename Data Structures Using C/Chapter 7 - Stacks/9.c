#include <stdio.h>
int f(int, int);

int main () {
	int n1, n2;
	printf("Enter input: ");
	scanf("%d %d", &n1, &n2);
	printf("The result is %d\n", f(n1, n2));
	return 0;
}

int f(int m, int n) {
	if ((m == 0) || (m >= n) && (n >= 1))
		return 1;
	else
		return (f((m - 1), n) + f((m - 1), (n - 1)));

}
