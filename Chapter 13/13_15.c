#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int contents[100];
int top = 0;

void make_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
int evaluate_RPN_espression(const  char *expression);

// 1 2 3 * + =
// 5 8 * 4 9 - / =
int main() {
  char input[100];

  while (true) {
    printf("Enter an RPN expression: ");
    scanf("%[^\n]s", input);

    printf("Value of Expression: %d", evaluate_RPN_espression(input));
  }


  return 0;
}

int evaluate_RPN_espression(const  char *expression) {
  int num1, num2, num3;
  do {
    switch (*expression) {
      case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
        push(*expression - '0');
        break;
      case '*':
        push(pop() * pop());
        break;
      case '+':
        push(pop() + pop());
        break;
      case '-':
        num1 = pop();
        num2 = pop();
        num3 = num2 - num1;
        push(num3);
        break;
      case '/':
        num1 = pop();
        num2 = pop();
        num3 = num2 / num1;
        push(num3);
        break;
      case '=':
        num1 = pop();
        make_empty();
        return (num1);
      default: return 0;
    }
  } while(*++expression);

}





void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 100;
}

bool is_full(void) {
  return top == 100;
}

void push(int i) {
  if (is_full()) {
    printf("Expression is too complex");
    exit(0);
  }
  else
    contents[top++] = i;
}

int pop(void) {
  if(is_empty()) {
    printf("Not enough operands in expressioin");
    exit(0);
  }
  else
    return contents[--top];
}
