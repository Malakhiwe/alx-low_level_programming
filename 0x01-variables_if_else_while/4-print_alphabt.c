#include <stdio.h>
/**
 * main - Entry into the program
 * Description: Prints all letters besides q & e
 * Return: 0 Success
 **/
int main(void)
{
char a, q, e;
q = 'q';
e = 'e';
for (a = 'a'; a <= 'z'; a++)
	if (a != q && a != e)
		putchar(a);
		putchar('\n');
}
