#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - This function returns length of a string.
 * @s: This pointer contains the string.
 * Return: length of the string.
 */


int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}


return (_strlen_recursion(s + 1) + 1);
}
