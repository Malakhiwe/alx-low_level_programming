#include "main.h"

/**
 * _memset - Function fills memory with a constant byte.
 * @s: Pointer to memory area.
 * @b: The constant byte variable
 * @n: Number of elements in bytes.
 * Return: returns pointer to memory s.
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);

}
