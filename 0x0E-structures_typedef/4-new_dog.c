#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;

while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - function creates a new dog.
 * @name: Contains new name of the dog.
 * @age: Contains new age.
 * @owner: Contains new owner name.
 *Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int len1, len2;


new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}

len1 = _strlen(name);
new_dog->name = malloc(len1 + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(new_dog->name, name);

new_dog->age = age;

len2 = _strlen(owner);
new_dog->owner = malloc(len2 + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
_strcpy(new_dog->owner, owner);
return (new_dog);
}
