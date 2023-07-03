#include "main.h"
#include <stddef.h>

/**
 * _strchr - function locates a character in a string
 * @s: the string
 * @c: the character to be located
 * Return: a pointer or null if character not found
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (NULL);
}

