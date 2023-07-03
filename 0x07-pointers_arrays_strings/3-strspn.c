#include "main.h"

/**
 * _strspn - Gets length of a prefix substring consisting of bytes from accept.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to be searched for.
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}

	return (count);
}

