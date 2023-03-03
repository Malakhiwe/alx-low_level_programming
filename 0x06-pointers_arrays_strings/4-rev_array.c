#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the contents of an array
 * @n: number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
int r;
int s;

for (r = 0; r < n--; r++)
{
s = a[r];
a[r] = a[n];
a[n] = s;
}
}
