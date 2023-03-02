#include "main.h"
#include <stdio.h>

/**
 * _strcat - concacatenates 2 strings
 * @dest: Destination string
 * @src: Source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, m;
i = 0;
while (dest[i] != '\0')
{
i++;
}
m = 0;
while (src[m] != '\0')
{
dest[i] = src[m];
i++;
m++;
}
dest[i] = '\0';
return (dest);
}
