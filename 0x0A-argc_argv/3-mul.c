#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiplication - Accepts 2 parms then multiples two numbers.
 * @argc: Counts the number of arguments.
 * @argv: Array of arguments.
 * Return: product
 */

int multiplication(int argc, char *argv[])
{
int res = 0;
int num1;
int num2;

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

int prd;
prd = num1 * num2;

return (prd);

}

/**
 * main - Calls a function called multiplication which returns a result.
 * @argc: Counts the number of args.
 * @argv: Array of arguments.
 * Return: product
 */


int main(int argc, char *argv[])
{

int product;

if (argc > 1)
{
product = multiplication(argc, argv);
printf("%d\n", product);
}

else
{
printf("Error");
return (1);
}

return (0);
}
