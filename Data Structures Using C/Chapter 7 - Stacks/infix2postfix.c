#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX 100
/* infix: operator goes between operands
postfix: operator goes after operands, does not follow operator precedence */

char stack[MAX];
int top = -1;
char pop(char[]);
void push(char[], char);
bool bedmas(char, char);

int main () {
	int i = 0, j = 0;
	char temp;
	char postfix[MAX], infix[MAX];
	printf("Enter the infix expression (no spaces): ");
	scanf("%[^\n]", infix);
	strcat(infix, ")");
	push(stack, '(');
	while (infix[i] != '\0') {
		if (infix[i] == '(')
			push(stack, infix[i++]);
		else if (infix[i] == ')') {
			while((top != -1) && (stack[top] != '(')) {
				postfix[j++] = pop(stack);
			}
			temp = pop(stack);
			i++;
		}
		else if (isdigit(infix[i]) || isalpha(infix[i])) {
			postfix[j++] = infix[i++];	
		}

		else if ((infix[i] == '*') || (infix[i] == '-') || (infix[i] == '+') || (infix[i] == '/') || (infix[i] == '%')) {
			while ((stack[top] != '(') && (bedmas(stack[top], infix[i])) && (top != -1)) {
				postfix[j++] = pop(stack);
			}
			push(stack, infix[i++]);
		}
	}
	while((top != -1) && (stack[top] != '('))
		postfix[j++] = pop(stack);
	postfix[j] = '\0';	
	printf("The postfix expression is: %s\n", postfix);
	return 0;
}

void push(char ar[], char ch) {
	if (top == MAX - 1)
		printf("\nStack Overflow");
	else
		ar[++top] = ch;	
}

char pop(char ar[]) {
	if (top == -1)
		printf("\nStack Underflow");
	else
		return ar[top--];
}

bool bedmas(char c1, char c2) {
	if((c1 == '*') || (c1 == '/') || (c1 == '%') && (c2 == '+') || (c2 == '-'))
		return true;
	else
		return false;
}


