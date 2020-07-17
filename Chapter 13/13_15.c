#include <stdio.h>
#include <stdbool.h>
int contents[100];
int top = 0;

void make_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

// 239, 313
int main() {
  char ch;
  while (true) {
    printf("Enter an RPN expression: ");
  }


  return 0;
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
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}

int pop(void) {
  if(is_empty())
    stack_underflow();
  else
    return contents[--top];
}
