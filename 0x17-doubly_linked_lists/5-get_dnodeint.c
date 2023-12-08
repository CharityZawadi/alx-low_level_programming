#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node to return.
* Return: Address of the nth node or NULL if it does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
