#include "main.h"
/**
 * more_numbers - prints numbers 1 - 14 in a loop 10 times
 * Return: 0
 */
void more_numbers(void)
{
int i, m;
for (m = 0; m < 11; m++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar(i /10 + '0');
_putchar(i % 10 + '0');
}
}
}
_putchar('\n');
}
