#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);

*n = *n & ~(1 << index);
return (1);
}

