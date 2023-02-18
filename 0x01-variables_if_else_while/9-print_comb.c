#include <stdio.h>
/**
 * main - Entry into the program
 * Description: program that prints all possible combinations
 * Return: 0 Succe
 **/
int main(void)
{
int x;
for (x = '0'; x  <= '9'; x++)
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
