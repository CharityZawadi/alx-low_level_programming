#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: A pointer to the list
 * @n: The integer to add
 * Return: The address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}

