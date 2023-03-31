#include <stdio.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in the list.
 * @h: This is the pointer to the list.
 * Return: c which is the number of elements.
 */

size_t list_len(const list_t *h)
{
size_t c = 0;

while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
