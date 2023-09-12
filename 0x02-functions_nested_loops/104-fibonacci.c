#include "main.h"
#include <stdio.h>

/**
 * print_large_number - Print a large number as a string
 * @n: The number to print
 */
void print_large_number(char *n)
{
int i;

for (i = 0; n[i]; i++)
_putchar(n[i]);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i;
char a[100] = "1";
char b[100] = "2";
char next[100];

print_large_number(a);
_putchar(',');
_putchar(' ');

for (i = 2; i < 98; i++)
{
sprintf(next, "%s", b);
add_strings(next, a);

if (i != 97)
{
print_large_number(next);
_putchar(',');
_putchar(' ');
}
else
{
print_large_number(next);
}

sprintf(a, "%s", b);
sprintf(b, "%s", next);
}

_putchar('\n');

return (0);
}

