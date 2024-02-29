#include <stdio.h>

// Define an enum for days of the week
enum Days
{
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

typedef enum
{
  JANUARY,
  FEBRUARY,
  MARCH,
  APRIL,
  MAY,
  JUNE,
  JULY,
  AUGUST,
  SEPTEMBER,
  OCTOBER,
  NOVEMBER,
  DECEMBER
} Months;

int main()
{
  // Declare a variable of type Days
  enum Days today;

  // Assign a value to the variable
  today = MONDAY;

  // Use the enum value in a switch statement
  switch (today)
  {
  case MONDAY:
    printf("Today is Monday.\n");
    break;
  case TUESDAY:
    printf("Today is Tuesday.\n");
    break;
  case WEDNESDAY:
    printf("Today is Wednesday.\n");
    break;
  case THURSDAY:
    printf("Today is Thursday.\n");
    break;
  case FRIDAY:
    printf("Today is Friday.\n");
    break;
  case SATURDAY:
    printf("Today is Saturday.\n");
    break;
  case SUNDAY:
    printf("Today is Sunday.\n");
    break;
  default:
    printf("Invalid day.\n");
    break;
  }

  // Declare a variable of type Months
  Months month;

  // Assign a value to the variable
  month = JANUARY;

  // Use the enum value in a switch statement
  switch (month)
  {
  case JANUARY:
    printf("The month is January.\n");
    break;
  case FEBRUARY:

    printf("The month is February.\n");
    break;
  case MARCH:

    printf("The month is March.\n");
    break;
  case APRIL:

    printf("The month is April.\n");
    break;
  case MAY:

    printf("The month is May.\n");
    break;
  case JUNE:

    printf("The month is June.\n");
    break;
  case JULY:

    printf("The month is July.\n");
    break;

  case AUGUST:

    printf("The month is August.\n");
    break;

  case SEPTEMBER:

    printf("The month is September.\n");
    break;

  case OCTOBER:

    printf("The month is October.\n");
    break;

  case NOVEMBER:

    printf("The month is November.\n");
    break;

  case DECEMBER:

    printf("The month is December.\n");
    break;

  default:

    printf("Invalid month.\n");
    break;
  }

  return 0;
}
