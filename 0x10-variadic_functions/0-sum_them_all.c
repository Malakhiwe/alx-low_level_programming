#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sums up all params.
 * @n: Keeps count of all params.
 * Return: total of summed params.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int t = 0;
va_list args;
va_start(args, n);

if (n == 0)
{
return (0);
}


for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
t += x;
}

va_end(args);
return (t);

}
