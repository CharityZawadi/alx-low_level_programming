#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print the second half of.
 */
void puts_half(char *str)
{
int length = 0;
int i, start;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length + 1) / 2;
}

for (i = start; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}

