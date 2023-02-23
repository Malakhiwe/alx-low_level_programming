#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && b > c)
{
largest = a;
printf("a %d \n", largest);
}
else if (b > a && a > c)
{
largest = b;
printf("b %d \n", largest);
}
else
{
if (c > b && c > a)
{
largest = c;
printf("a %d \n", largest);
}
}

return (largest);
}
