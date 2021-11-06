#include <stdio.h>

int printmods (long long, long long, long long);
int findorder (long long, long long, long long, long long); 

int main () {
	long long n, m;
	printf("Enter number: ");
	scanf("%lld", &n);
	printf("Enter the modulus: ");
	scanf("%lld", &m);

	printmods(n, m - 1, m);
	printf("The order of %lld in Z*_%lld is %d\n", n, m, findorder(n, n, 1, m));
	return 0;
}

int printmods (long long n, long long p, long long m) {
	if (p == 0) {
		printf("%lld ^ 0 = 1 mod %lld\n", n, m);
		return 1;
	}
	else {
		long long i = (printmods(n, p - 1, m) * n) % m;
		printf("%lld ^ %lld = %lld mod %lld\n", n, p, i, m);
		return i;
	}
}

int findorder (long long n, long long n2, long long p, long long m) {
	if (p == m)
		return p - 1;
	else if (n % m == 1)
		return p;
	else
		return findorder (n2 * (n % m), n2, p + 1, m);  
}
