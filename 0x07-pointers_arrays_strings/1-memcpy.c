#include "main.h"
/**
 * _memcpy - This function copies memory area.
 * @dest: pointer to the destination of the copied memory.
 * @src: pointer to the source of the memory being copied.
 * @n: size of the memory beinf copied.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
