#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet
 * Return 0
 **/
void print_alphabet_x10(void)
{
char c;
int k;
for (k = 0; k <= 9; k++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
