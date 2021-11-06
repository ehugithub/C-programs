#include <stdio.h>

int main () {
	int n, p;
	printf("Enter residue: ");
	scanf("%d", &n);
	printf("Enter modulo: ");
	scanf("%d", &p);
	for (int i = 1; i < p; i++) {
		if ((i * i) % p == n)
			printf("Solution found for %d mod %d: %d\n", n, p, i);
	}
	
	return 0;
}
