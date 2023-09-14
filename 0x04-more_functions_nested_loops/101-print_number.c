#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
int divisor = 1;
int temp = n;

if (n < 0)
{
_putchar('-');
temp = -temp;
}

while (temp / divisor >= 10)
{
divisor *= 10;
}

while (divisor != 0)
{
_putchar((temp / divisor) + '0');
temp %= divisor;
divisor /= 10;
}
}

