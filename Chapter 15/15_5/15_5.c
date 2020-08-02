#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "15_5.h"

int contents[100];
int top = 0;

// 239, 313
// 1 2 3 * + =
// 5 8 * 4 9 - / =
int main() {
  int num1, num2, num3;
  char ch;
  while (true) {
    printf("Enter an RPN expression: ");
    while ((ch = getchar()) != '\n') {
      if (ch == ' ')
        continue;
      /* printf("%d ", contents[0]);
      printf("%d ", contents[1]);
      printf("%d ", contents[2]);
      printf("%d ", contents[3]); */
      switch(ch) {
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
          push(ch - '0');
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
          //push(-pop() + pop());
          break;
        case '/':
          num1 = pop();
          num2 = pop();
          num3 = num2 / num1;
          push(num3);
          //push((1 / pop()) * pop());
          break;
        case '=':
          printf("Value of Expression: %d", pop());
          make_empty();
        default: return 0;
      }
    }
  }


  return 0;
}

void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 0;
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
