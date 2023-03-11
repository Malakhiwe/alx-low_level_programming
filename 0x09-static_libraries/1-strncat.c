#include "main.h"
#include <stdio.h>

/**
 * _strncat - Function concatenates two strings
 * @dest: 1st input variable
 * @src: 2nd input variable
 * @n: Counter variable
 * Return: a string
 */


char *_strncat(char *dest, char *src, int n)
{

int i, k;

i = 0;
while (dest[i] != '\0')
{
i++;
}


k = 0;


while (k < n && src[k] != '\0')
{
dest[i] = src[k];
i++;
k++;
}

dest[i] = '\0';

return (dest);
}
