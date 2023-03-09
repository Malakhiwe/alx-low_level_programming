#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Function checks if number is a prime number.
 * @n: The integer to checked.
 * Return: 0 is success.
 */

int is_prime_number(int n)
{
if (n % 2 == 0)
{
return (1);
}
else
{
return (0);
}
}
