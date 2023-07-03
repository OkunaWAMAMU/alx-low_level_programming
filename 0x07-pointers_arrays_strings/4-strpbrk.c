#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Locates the first occurrence of any byte from accept in a string.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing bytes to be searched for.
 *
 * Return: Pointer to the first occurrence of a byte from accept in s,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}

	return (NULL);
}

