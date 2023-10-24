#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list (safely) with a loop
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise = head, *hare = head;
size_t count = 0;

if (head == NULL)
return (0);

while (hare != NULL && hare->next != NULL)
{
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
count++;

tortoise = tortoise->next;
hare = hare->next->next;

if (tortoise == hare)
{
printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
break;
}
}

return (count);
}

