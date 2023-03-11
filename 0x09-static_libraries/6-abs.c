#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes value of an integer
 * @k: Variable to be computed
 * Return: the number to be returned
 **/
int _abs(int k)
{
if (k < 0)
{
int c;
c = k * -1;
return (c);
}
return (k);
}
