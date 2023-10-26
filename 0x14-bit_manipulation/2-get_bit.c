#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index
 * @n: The number to get the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the
 * given index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

return ((n >> index) & 1);
}

