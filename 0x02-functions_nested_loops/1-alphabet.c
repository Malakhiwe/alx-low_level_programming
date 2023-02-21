#include <stdio.h>
#include "main.c"
/**
 * main - Entry into main program
 * Description: This program prints alphabet
 * Return: 0 Success
 **/
int main(void)
{
char k;
for (k = 'a'; k <= 'z'; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
