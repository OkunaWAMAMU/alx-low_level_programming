#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (*s == c ? s : NULL);
}

/**
 * _strspn - Gets the length of a prefix substring consisting of only
 * the characters found in accept.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s that consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}

		if (!found)
			break;

		s++;
	}

	return (count);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && (*haystack == *sub))
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
