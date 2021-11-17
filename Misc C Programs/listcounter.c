#include <stdio.h>


int main () {

	int ar[7] = {3, 9, 3, 4, 9, 3, 7};

	int count[10] = {0};

	for (int i = 0; i < (sizeof(ar) / sizeof(ar[0])); i++) {
		printf("%d %d\n", ar[i], count[ar[i]]++);
	}


}
