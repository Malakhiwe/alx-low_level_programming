#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Prints the number of elements in the linked list
 * h_ is a pointer to the linked list
 * Return: count
 */
size_t print_listint(const listint_t *h)
{

unsigned int count = 0;
if (h == NULL)
{
printf("This list is empty!. \n");
}

while (h != NULL)
{
count++;
printf("%d \n", h->n);
h = h->next;
}
return (count);

}
