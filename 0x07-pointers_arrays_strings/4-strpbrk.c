#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that Locates the first occurrence of any byte frm accept
 * @s: pointer to the string to be searched.
 * @accept: this is the pointer to the string containing bytes to be searched.
 * Return: Returns a pointer to the first occurrence of a byte from accept in
 */
char *_strpbrk(char *s, char *accept)
{
	char *pointer;

	while (*s)
	{
		for (pointer = accept; *pointer; pointer++)
		{
			if (*s == *pointer)
				return (s);
		}
		s++;
	}

	return (NULL);
}

