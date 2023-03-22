#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This struct defines a new type.
 * @name: Dog name.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
