#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a listint_t list
 * @head: A pointer to the list
 * @index: The index of the node to return
 * Return: The nth node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index; i++)
{
if (!head)
return (NULL);
head = head->next;
}

return (head);
}

