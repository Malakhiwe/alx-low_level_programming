#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * init_dog - initialize variable of type struct dog.
 * @d: Pointer to struct init dog.
 * @name: Initialize name.
 * @age: Initialize age.
 * @owner: Initialize owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
strcpy(d->name,  name);
d->age = age;
strcpy(d->owner, owner);

}
