#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Calculates the number of elements in the list.
 * @h: Pointer to the list object.
 * Return: count which is the counter variable.
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
