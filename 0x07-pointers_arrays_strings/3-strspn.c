#include "main.h"
#include "string.h"
/**
 * _strspn - This function gets the length of a prefix substring.
 * @s: Segment of the string.
 * @accept: Acceptable bytes.
 * Return: i.
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int i, m;

for (i = 0; s[i]; i++)
{

for (m = 0; accept[m]; m++)
{

if (s[i] == accept[m])
{
break;
}
if (!accept[m])
{
break;
}

}
}

return (i);

}
