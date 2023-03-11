#include "main.h"
#include <stdio.h>

/**
 * _strcmp - This function compares two strings
 * @s1: First string input
 * @s2: Second string input
 * Return: a string
 */

int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);

}
