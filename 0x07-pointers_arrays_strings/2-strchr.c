#include "main.h"
#include <stdio.h>


/**
 * _strchr - locates a character in a string.
 * @s: Pointer to a string.
 * @c: Character bring searched for.
 * Return: 0 Always
 */

char *_strchr(char *s, char c)
{
while (*s >= '\0')
{

if (*s == c)
return ((char *) s);
s++;


}
return (NULL);
}
