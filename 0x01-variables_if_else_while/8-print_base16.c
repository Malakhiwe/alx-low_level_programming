#include <stdio.h>
/**
 * main - Entry into the program
 * Description: Prints all the numbers of bas 16
 * Return: 0 Success
 **/
int main(void)
{
char n, m;
for (n = 0; n <= 9; n++)
{
putchar(n);
}
for (m = '0'; m <= 'f'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
