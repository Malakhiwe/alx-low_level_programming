#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: stores the actual string.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
}
return (l);
}
