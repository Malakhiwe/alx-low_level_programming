#include <stdio.h>
/**
 * main - Entry into program
 * Description: Program prints alphabets in lower case
 * Return: 0 Success
 */
int main(void)
{
char a;
for (a = 'A'; a < 'Z'; a++)
	putchar(a);
for (a = 'a'; a < 'z'; a++)
	putchar(a);
return (0);
}

