#include <stdio.h>
#include  <stdbool.h>

bool checkprime (int);

int main () {
	int n;
	printf("Enter num: ");
	scanf("%d", &n);

	for (int i = 2; i < 200; i++) {
		for (int j = 0; j < i / 2; j++) {
			for (int k = 0; k < i / 2; k++) {
				if (checkprime (i) && ((j * j + n * k * k) == i)) {
					printf("%d^2 + %d * %d ^ 2  = %d \t = %d mod 3\t = %d mod 4\t = %d mod 5\t = %d mod 6\t = %d mod 7\t = %d mod 8\t = %d mod 9\t = %d mod 10\t = %d mod 11\t = %d mod 12\t = %d mod 13\t = %d mod 28\n", j, n, k, i, i % 3, i % 4, i % 5, i % 6, i % 7, i % 8, i % 9, i % 10, i % 11, i % 12, i % 13, i % 28);
					continue;
					}
			}
		}

	}
	return 0;
 }

bool checkprime (int n) {
	if (n == 0 || n == 1)
		return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}









