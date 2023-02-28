#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: Contains a string to be reversed.
 * Return: 0
 */

void rev_string(char *s)
{
char rev = s[0];
int i;
int count = 0;

while (s[count] != '\0')
	count++;
for (i = 0; i < count; i++)
{
count--;
rev = s[i];
s[i] = s[count];
s[count] = rev;
}
}
