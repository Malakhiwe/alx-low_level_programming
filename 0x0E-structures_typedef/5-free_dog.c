#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - freeas memory allocated to dog.
 * @d: Pointer pointer memory allocated to dog.
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
