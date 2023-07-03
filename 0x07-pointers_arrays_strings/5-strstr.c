#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 * @haystack: This is the string to search in.
 * @needle: This is the substring to be searched for.
 * Return: Pointer to the beginning of the located substring,or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && (*haystack == *n))
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
