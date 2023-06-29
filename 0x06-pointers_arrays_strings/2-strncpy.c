#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: input value
 * Return: the return value is the copied string
 **/


char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (result);
}
