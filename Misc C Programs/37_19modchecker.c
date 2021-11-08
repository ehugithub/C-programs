#include <stdio.h>

int main () {

	int threeseven[20] = {37, 27, 23, 58, 11, 41, 53, 9, 28, 60, 24, 34, 38, 3, 50, 20, 8, 52, 33, 1};
	int nineteen[30] = {19, 56, 27, 25, 48, 58, 4, 15, 41, 47, 39, 9, 49, 16, 60, 42, 5, 34, 36, 13, 3, 57, 46, 20, 14, 22, 52, 12, 45, 1};

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 30; j++) {
			if ((threeseven[i] * nineteen[j]) % 61 == 1)
				printf("37 ^ %d * 19 ^ %d = 1 mod 61\n", i + 1, j + 1);
		}
	}

	return 0;
}
