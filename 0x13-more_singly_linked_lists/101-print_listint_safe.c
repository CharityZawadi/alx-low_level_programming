#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;

while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
if (head < head->next)
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
head = head->next;
}
return (count);
}

