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

unsigned int p = 0;
int m;

while (*s)
{

for (m = 0; accept[m]; m++)
{

if (*s == accept[m])
{
p++;
break;
}

else if (accept[m + 1] == '\0')
{
return (p);
}

}
s++;
}

return (p);

}
