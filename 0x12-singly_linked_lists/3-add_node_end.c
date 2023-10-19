#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_new_node - Creates a new list_t node and duplicates the string.
 * @str: The string to be duplicated.
 * Return: A pointer to the new node.
 */
list_t *create_new_node(const char *str)
{
list_t *new_node;
char *new_str;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

if (str)
{
while (str[len])
len++;

new_str = malloc(len + 1);
if (new_str == NULL)
{
free(new_node);
return (NULL);
}

for (len = 0; str[len]; len++)
new_str[len] = str[len];
new_str[len] = '\0';
}
else
{
new_str = NULL;
}

new_node->str = new_str;
new_node->len = len;
new_node->next = NULL;

return (new_node);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;

new_node = create_new_node(str);
if (new_node == NULL)
return (NULL);

if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next)
last_node = last_node->next;
last_node->next = new_node;
}

return (new_node);
}

