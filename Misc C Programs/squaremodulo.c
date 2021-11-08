#include <stdio.h>
#include <stdbool.h>

bool checkprime(int);
int findresidue(int, int);


int main () {
	int p, q;
	printf("Enter modulo: ");
	scanf("%d", &q);
	printf("Enter q: ");
	scanf("%d", &p);

	printf("p ||");
	for (int n = -1; n <= p; n++) {
		if(!checkprime(n))
			continue;
		else
			printf("sqrt(%d)   ", n);
	}
	printf("\n\t");
	for (int n = 0; n <= p; n++) {
		if(!checkprime(n))
			continue;
		else printf("==========");
	}

	printf("\n");

	
	for (int i = 2; i <= q; i++) {
		if (!checkprime(i))
			continue;
		else {
			printf("%d ||", i);
			for (int j = -1; j <= p; j++) {
				if (!checkprime(j) && j != -1)
					continue;
				else {
					if (findresidue (j ,i) == -1)
						printf("    --    ");
					else
						printf("     %d   ", findresidue(j, i));
						

				}
			}
			printf("\n");
		}


	}
	//printf("%d is%sprime\n", p, checkprime(p) ? " " : " not ");

}

int findresidue(int q, int p) {
	for (int i = 0; i < p; i++) {
		if (q == -1 && (i * i) % p == p - 1)
			return i;
		if ((i * i) % p == q % p)
			return i;
	}
	return -1;
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
