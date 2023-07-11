#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: The string to be duplicated
 *
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	int b = 0, z = 1;
	char *s;

if (str == NULL)
return (NULL);
while (str[z])
{
z++;
}
s = malloc((sizeof(char) * z) +1);
if (s == NULL)
return (NULL);
while (b < z)
{
s[b] = str[b];
b++;
}

s[b] = '\0';
return (s);
}
