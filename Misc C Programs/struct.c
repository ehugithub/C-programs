#include <stdio.h>
struct employee {
  char name[20];
  int hiredate;
  float salary;
};

int main () {

  struct employee employee1 = {"John Smith", 2012, 132000};
  printf("%s, salary %.2f, hired on %d\n", employee1.name, employee1.salary, employee1.hiredate);
  struct employee employee2;
  printf("Enter the employee's inofrmation\nName: ");
  scanf("%s", employee2.name);
  printf("Hire date: ");
  scanf("%d", &employee2.hiredate);
  printf("Salary: ");
  scanf("%f", &employee2.salary);

  printf("%s, salary %.2f, hired on %d\n", employee2sun.name, employee2.salary, employee2.hiredate);
  return 0;

}
