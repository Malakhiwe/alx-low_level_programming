#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function prints a struct dog.
 * @d: Pointer to struct.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("nil");
}
if (d->owner == NULL)
{
printf("nil");
}

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);

}
