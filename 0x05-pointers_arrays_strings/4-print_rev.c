#include "main.h"
#include <stdio.h>

/**
 * print_rev - Function that reverses a string.
 * @s: Variable that contains the string.
 * Return: Always 0.
 */

void print_rev(char *s)
{
int len = 0;
int i;
while (*s != '\0')
{
len++;
s++;
}
s--;
for (i = len; i > 0; i--)
{
putchar(*s);
s--;
}
putchar('\n');
}
