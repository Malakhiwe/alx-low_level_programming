#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: program checks this variable
 * Return: 1 if its a success and 0 for anything else
 **/
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
