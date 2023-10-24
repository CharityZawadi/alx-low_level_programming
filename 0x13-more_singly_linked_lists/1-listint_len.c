#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list
 * @h: A pointer to the list
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
h = h->next;
nodes++;
}

return (nodes);
}

