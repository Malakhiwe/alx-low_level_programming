#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - This function returns a natural square root of number.
 * @n: The number which we're seeking the square root.
 * Return: 0.
 */

int _sqrt_recursion(int n)
{
int i;

if (n < 0)
{
return (-1);
}
i = 1;


while (i * i <= n)
{
if (i * i == n)
{
return (i);
}
i++;
}

return (-1);


}
