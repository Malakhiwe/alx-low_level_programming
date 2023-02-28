#include "main.h"
#include <stdio.h>

/**
 * print_array - Function prints n elements of arr
 * @a: pointer used to store array address
 * @n: Number of elements in the array
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < (n - 1); i++)
{
printf("%d", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
