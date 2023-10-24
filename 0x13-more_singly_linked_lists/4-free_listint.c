#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free a listint_t list
 * @head: A pointer to the list
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head)
{
current = head;
head = head->next;
free(current);
}
}

