#include <stdio.h>
int main(void) {
  int input;
  float balance = 0.0f, credit, debit;
  printf("Welcome to the checkbook balancing program.\n");
  printf("Commands: 0 = clear balance, 1 = add credit, 2 = add debit, 3 = display balance, 4 = exit\n");
  while (input != 4) {
    printf("%.2f\n", balance);
    printf("Enter command: ");
    scanf("%d", &input);
    switch (input) {
      case 0:
        balance = 0.0f;
        break;
      case 1:
        printf("Enter amount of credit: ");
        scanf("%f", &credit);
        balance += credit;
        printf("%.2f added from your account\n", credit);
        break;
      case 2:
        printf("Enter amount of debit: ");
        scanf("%f", &debit);
        balance -= debit;
        printf("%.2f subtracted from your account\n", debit);
        break;
      case 3:
        printf("Your current balance is %.2f\n", &balance);
        break;
      case 4:
        return 0;
    }

  }



  return 0;
}
