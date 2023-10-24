#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all elements of a listint_t list
 * @h: A pointer to the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}

return (nodes);
}

