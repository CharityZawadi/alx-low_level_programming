#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list with a loop
 * @head: pointer to the head of the linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t nodes = 0;

if (head == NULL)
exit(98);

slow = head;
fast = head;

while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
nodes++;
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
return (nodes);
}
}

printf("[%p] %d\n", (void *)slow, slow->n);
nodes++;
return (nodes);
}

