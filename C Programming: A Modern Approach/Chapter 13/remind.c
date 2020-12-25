#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);

int main() {
  char reminders[50][60];
  char day_str[3], msg_str[61];
  int day, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == 50) {
      printf("--- No space left ---\n");
      break;
    }


    printf("Enter day and reminder: ");
    scanf("%2d", &day);
    if (day == 0)
      break;
    sprintf(day_str, "%2d", day);
    read_line(msg_str, 60);

    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0) break;
    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j-1]);

    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");

  for(i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);

  return 0;

}

int read_line(char str[], int n) {
  int ch, i = 0;

  while((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
