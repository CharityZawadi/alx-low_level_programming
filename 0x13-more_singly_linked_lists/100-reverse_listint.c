#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list
 * @head: A pointer to the list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;
return (prev);
}

