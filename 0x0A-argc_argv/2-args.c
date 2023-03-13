#include "main.h"
#include <stdio.h>

/**
 * main - This program prints alll argumentys it receives.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);

}
