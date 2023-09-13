#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of the month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

if (month >= 2 && leap_year)
{
day++;
}

int days_left = leap_year ? 366 - day : 365 - day;

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", days_left);
}

