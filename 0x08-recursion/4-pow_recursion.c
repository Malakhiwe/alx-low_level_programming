#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - This function returns the val of x raised to power y.
 * @x: is the base in.
 * @y: is the exponent.
 * Return: 0.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

else if (y == 0)
{
return (1);
}

return (_pow_recursion(x, y - 1) * x);
}
