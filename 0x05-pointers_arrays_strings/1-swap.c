#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps values the values of two integers
 * @a: This is the first varriable
 * @b: This is the second variable
 * Return: Always
 */

void swap_int (int *a, int *b)
{
int d = *b;
int c = *a;
*b = c;
*a = d;
}
