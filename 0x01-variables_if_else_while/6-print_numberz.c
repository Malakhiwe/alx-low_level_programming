#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * Description: Prints all the numbers from base 9 without putchar
 * Return: 0 Success
 **/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
