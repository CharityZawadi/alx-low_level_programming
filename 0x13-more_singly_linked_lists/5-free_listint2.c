#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free a listint_t list and set the head to NULL
 * @head: A pointer to the list
 */
void free_listint2(listint_t **head)
{
listint_t *current;

while (*head)
{
current = *head;
*head = (*head)->next;
free(current);
}
}

