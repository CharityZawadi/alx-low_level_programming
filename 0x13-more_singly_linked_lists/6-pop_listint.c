#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t list
 * @head: A pointer to the list
 * Return: The head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (!head || !*head)
return (0);

temp = *head;
*head = (*head)->next;
data = temp->n;
free(temp);

return (data);
}

