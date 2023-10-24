#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at a given index
 * @head: A pointer to the list
 * @index: The index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *current;
unsigned int i;

if (!head || !*head)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;
for (i = 0; i < index - 1 && current; i++)
current = current->next;

if (!current || !current->next)
return (-1);

temp = current->next;
current->next = temp->next;
free(temp);

return (1);
}

