#include <stdio.h>
#include <math.h>

int main () {
	double d, c;
	printf("Enter number: ");
	scanf("%lf", &d);
	printf("Enter rows: ");
	scanf("%lf", &c);


	double d2 = (floor (sqrt (d)));
	double A[102] = {0};
	double B[102] = {0, 0, 1};
	double a[102] = {0, 0, d2};
	double P[102] = {0, 1, d2}; 
	double Q[102] = {1, 0, 1};
	double n[102] = {0, 0, d2 * d2 - d};



	for (int i = 3; i < c + 2; i++) {
		A[i] = a[i - 1] * B[i - 1] - A[i - 1];
		B[i] = (d - A[i] * A[i]) / B[i - 1];
		a[i] = floor ((A[i] + d2) / B[i]);
		P[i] = a[i] * P[i - 1] + P[i - 2];
		Q[i] = a[i] * Q[i - 1] + Q[i - 2];
		n[i] = P[i] * P[i] - d * Q[i] * Q[i];
	}
	printf("Row numbers: ");
	for (int j = 0; j < c; j++)
		printf("\t%d", j + 1);
	printf("\n A | / | / | ");
	for (int j = 2; j < c + 2; j++)
		printf("\t%.0lf", A[j]);
	printf("\n B | / | / | ");
	for (int j = 2; j < c + 2; j++)
		printf("\t%.0lf", B[j]);
	printf("\n a | / | / | ");
	for (int j = 2; j < c + 2; j++)
		printf("\t%.0lf", a[j]);
	printf("\n P | 0 | 1 | ");
	for (int j = 2; j < c + 2; j++)
		printf("\t%.0lf", P[j]);
	printf("\n Q | 1 | 0 | ");
	for (int j = 2; j < c + 2; j++)
		printf("\t%.0lf", Q[j]);
	printf("\n n | / | / | ");
	for (int j = 2; j < c + 2; j++)
		printf("\t%.0lf", n[j]);
	printf("\n");
	return 0;
}
