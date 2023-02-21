#include <stdio.h>
#include "1-main.c"
/**
 * main - Entry into program
 * Description: This program prints alphabet
 * Return: 0 Success
 **/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return;
}
