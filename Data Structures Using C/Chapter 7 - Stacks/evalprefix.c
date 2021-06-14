#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
// evaluates prefix input 

float stack[MAX];
int top = -1;
float pop();
void push(float);

int main () {
	char prefix[MAX], ch;
	int n1, n2, len;

	printf("Enter your prefix expression (no spaces): ");
	scanf("%[^\n]s", prefix);
	len = strlen(prefix);
	for(int i = len - 1; i > -1; i--) {
		if (isdigit(prefix[i]))
			push(prefix[i] - '0');
		else {
			n1 = pop();
			n2 = pop();
			switch (prefix[i]) {
				case '*': push(n1 * n2); break;
				case '/': push(n1 / n2); break;
				case '+': push(n1 + n2); break;
				case '-': push(n1 - n2); break;
				case '%': push(n1 % n2); break;
			}
		}
	}
	printf("The result of the expression is: %.2f\n", pop());
	return 0;
}

float pop() {
	if (top == -1)
		printf("\nStack underflow");
	else
		return stack[top--];
}

void push(float ch) {
	if (top == MAX - 1)
		printf("\nStack overflow");
	else
		stack[++top] = ch;
}



