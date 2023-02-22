#include "main.h"
/**
 * jack_bauer - Prints every minute of everyday
 * Return: 0 Success
 **/
void jack_bauer(void)
{
int mins, minz;
mins  = 0;
while (mins < 24)
{
minz = 0;
while (minz < 60)
{
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar(':');
_putchar((minz / 10) + '0');
_putchar((minz % 10) + '0');
_putchar('\n');
minz++;
}
mins++;
}
}
