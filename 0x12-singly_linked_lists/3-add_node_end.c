#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "lists.h"

/**
 * add_node_end - Adds a node at the end of the list.
 * @head: Pointer to the head node of the list.
 * @str: String to be stored in the new node.
 * Return:  new_node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *new_node;
list_t *last = *head;

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

while (last && last->next != NULL)
{
last = last->next;
}
if (last)
{
last->next = new_node;
}
else
{
*head = new_node;
}

while (new_node->str[len])
{
len++;
}
new_node->len = len;
new_node->next = NULL;

return (new_node);
}
