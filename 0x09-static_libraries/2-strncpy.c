#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Function that copies a string
 * @dest: destination variable
 * @src: Source variable
 * @n: counter variable
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
