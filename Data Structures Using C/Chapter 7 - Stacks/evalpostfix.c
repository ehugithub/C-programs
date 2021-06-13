#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
// evaluates postfix input 

float stack[MAX];
int top = -1;
float pop();
void push(float);






int main () {
	char postfix[MAX];
	int i = 0, n1, n2, temp;

	printf("Enter your postfix expression (no spaces): ");
	scanf("%[^\n]s", postfix);
	
	while(postfix[i] != '\0') {
		if (isdigit(postfix[i]))
			push((float)(postfix[i++] - '0'));
		else {
			n1 = pop();
			n2 = pop();
			switch (postfix[i++]) {
				case '*': temp = n2 * n1; break;
				case '/': temp = n2 / n1; break;
				case '+': temp = n2 + n1; break;
				case '-': temp = n2 - n1; break;
				case '%': temp = n2 % n1; break;
			}
			push(temp);
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



