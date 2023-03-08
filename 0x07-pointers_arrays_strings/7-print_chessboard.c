#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - This function prints the chessboard.
 * @a: Pointer points array.
 * Return: 0 Always
*/


void print_chessboard(char (*a)[8])
{
int i;
int m;

for (i = 0; i < 8; i++)
{
for (m = 0; m < 8; m++)
_putchar(a[i][m]);
_putchar('\n');
}
}

