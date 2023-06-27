#include "main.h"

/**
 * _strcpy - function that Copies the string pointed to by src
 * @dest: this is a pointer to the destination buffer.
 * @src: this is a Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}

