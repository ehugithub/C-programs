#include <stdio.h>

float lambda(float);

int main () {
	float num;
	printf("Enter input: ");
	scanf("%f", &num);
	printf("The result is %.2f\n", lambda(num));
	return 0;
}

float lambda(float n) {
	if (n == 1)
		return 0.f;
	else if (n > 1)
		return (lambda(n/2) + 1);
}
