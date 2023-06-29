#include "main.h"
#include <stdio.h>

/**
 * _strncat - this function concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used
 * Return: the return value is the result of two concatenated strings
 **/

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}
