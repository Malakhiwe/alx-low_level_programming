#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list.
 * @head: pointer to the start of the list.
 * @n: Data to be added to the list.
 * Return: ptr which is the new noded added.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *ptr;

ptr = malloc(sizeof(listint_t));
if (!ptr)
{
return (NULL);
}
ptr->n = n;
ptr->next = *head;

*head = ptr;

return (ptr);
}
