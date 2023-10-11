#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to the comparison function
 *
 * Return: the index of the first element for which cmp doesn't return 0
 * If no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return i;
}
}
return -1;
}

