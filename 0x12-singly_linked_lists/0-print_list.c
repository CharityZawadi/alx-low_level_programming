#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: The linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, (h->str ? h->str : "(nil)"));
		h = h->next;
		count++;
	}

	return (count);
}

