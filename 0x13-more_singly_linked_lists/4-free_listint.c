#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - This function frees listint_t
 * @head: Points  to the head of the listint_t
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head->next;
head = temp;
}

}
