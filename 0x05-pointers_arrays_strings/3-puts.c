#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: contains the string to be printed
 * Return: Always 0.
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');

}
