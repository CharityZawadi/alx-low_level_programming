#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index indexof a dlistint_t linked list.
* @head: Pointer to a pointer to the head of the list.
* @index: Index of the node to delete.
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	current = temp->next;
	temp->next = current->next;

	if (current->next != NULL)
		current->next->prev = temp;

	free(current);

	return (1);
}
