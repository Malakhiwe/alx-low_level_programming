#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: variable containing the string
 * Return: 0.
 */

void puts2(char *str)
{
int count = 0;
int i = 0;
char *len = str;
int m;

while (*len != '\0')
{
len++;
count++;
}

i = count - 1;
for (m = 0; m <= i; m++)
{
if (m % 2 == 0)
{
putchar(str[m]);
}
}
putchar('\n');
}
