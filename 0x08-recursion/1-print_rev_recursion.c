#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - This function prints a string in reverse.
 * @s: This pointer cointains a string to be reversed.
 */

void _print_rev_recursion(char *s)
{


if (*s == '\0')
{
return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
}
