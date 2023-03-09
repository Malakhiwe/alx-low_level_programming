#include "main.h"
#include <stdio.h>

/**
 * factorial - This function returns factorial of given no.
 * @n: The giver number.
 * Return: int n.
 */


int factorial(int n)
{
if (n == 0)
{
return (1);
}

if (n <= 0)
{
return (-1);
}

return (n * factorial(n - 1));
}
