#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: The number of elements
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i, total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < total_size; i++)
ptr[i] = 0;

return (ptr);
}

