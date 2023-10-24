#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Free a listint_t list (including loops)
 * @h: A pointer to the list
 */
void free_listint_safe(listint_t **h)
{
listint_t *current;

while (*h)
{
current = *h;
*h = (*h)->next;
if (current <= *h)
break;
free(current);
}
*h = NULL;
}

