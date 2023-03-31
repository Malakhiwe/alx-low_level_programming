#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "lists.h"

/**
 * add_node - Adds a new node at the begining of a list.
 * @str: Points to the singly liked list.
 * Return: new_node.
 * @head: This is the starting node.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (head == NULL || str == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = (*head);
(*head) = new_node;

return (new_node);
}
