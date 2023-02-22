#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @r: Is the variable used to ascertain results
 * Return: the value of the last digit
 **/
int print_last_digit(int r)
{
int m;
m = r % 10;
if (m < 0)
{
m = m * -1;
}
_putchar(m + '0');
return (m);
}
