#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i;
unsigned long int a = 1, b = 2, next;

_putchar('1');
_putchar(',');
_putchar(' ');

for (i = 2; i < 98; i++)
{
next = a + b;
a = b;
b = next;

if (i != 97)
{
print_number(next);
_putchar(',');
_putchar(' ');
}
else
{
print_number(next);
}
}

_putchar('\n');

return (0);
}

