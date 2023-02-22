#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: Variable which is used
 * Return: 1, 0 and -1
 **/
int print_sign(int n)
{
int r = 0;
if (n > 0)
{
_putchar('+');
r = 1;
}
else if (n == 0)
{
_putchar('0');
r = 0;
}
else if (n < 0)
{
_putchar('-');
r = -1;
}
return (r);
}
