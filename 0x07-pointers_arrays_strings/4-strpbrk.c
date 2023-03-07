#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - This function seaches a string for any set of bytes.
 * @s: Pointer to the string
 * @accept: The accepted bytes
 * Return: 0 Always
 */

char *_strpbrk(char *s, char *accept)
{
const char *temp;

if (s == NULL || accept == NULL)
{
return (NULL);
}


while (*s != '\0')
{
temp = accept;


while (*temp != '\0')
{
if (*s == *temp)
{
return ((char *)(s));
}
temp++;
}
s++;
}
return (NULL);
}
