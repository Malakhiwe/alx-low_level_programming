#include "main.h"
/**
 * times_table - 9 times table
 * Return: 0
 **/
void times_table(void)
{
int m, n, o, p, r;

for (m = 0; m <= 9; m++)
{
for (n = 0; n <= 9; n++)
{
o = m * n;
if (o > 9)
{
p = o % 10;
r = (o - p) / 10;
_putchar(44);
_putchar(32);
_putchar(r + '0');
_putchar(p + '0');
}
else
{
if (n != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(o + '0');
}
}
_putchar('\n');
}
}
