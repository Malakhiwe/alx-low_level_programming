#include "main.h"
/**
 * _islower - Checks for lowercase characters
 * @c: Thats the variable in use
 * Return: 1 if lowecase and 0 if not
 **/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
