#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main- Entry point of the project
 * Description: Program assigns a random number to the variable
 * Return: 0 (Success)
 **/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive");
}
else
{
printf("is negative");
}
return (0);
}

