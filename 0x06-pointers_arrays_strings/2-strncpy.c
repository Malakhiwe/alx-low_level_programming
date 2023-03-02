#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Function that copies a string
 * @dest: destination variable 
 * @src: Source variable
 * Returns: a string
 */

char *_strncpy(char* dest, char* src, int n)
{
int i;

i = 0;
while (dest[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
src[i] = '\0';
i++;
}

return (dest);
}
