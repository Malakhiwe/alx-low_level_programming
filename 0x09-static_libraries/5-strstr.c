#include "main.h"
#include <stdio.h>
/**
 * _strstr - This function locates a substring
 * @haystack: Pointer to the string thats going to be searched
 * @needle: Pointer to the substring
 * Return: 0 Always
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *collection = haystack;
char *sample = needle;

while (*collection == *sample && *sample != '\0')
{
collection++;
sample++;
}
if (*sample == '\0')
return (haystack);
}
return (0);
}

