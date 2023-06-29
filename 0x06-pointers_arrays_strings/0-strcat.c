#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: Pointer to the resulting string (dest).
 **/

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}

