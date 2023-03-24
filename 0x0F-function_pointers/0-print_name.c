#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function prints name.
 * @name: stores name to be printed.
 * @f: Pointer to a function.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
