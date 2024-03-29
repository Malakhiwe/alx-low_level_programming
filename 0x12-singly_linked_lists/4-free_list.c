#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "lists.h"

/**
 * free_list - frees list_t
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
list_t *new;

while (head != NULL)
{
new = head;
head = head->next;
free(new->str);
free(new);
}

}
