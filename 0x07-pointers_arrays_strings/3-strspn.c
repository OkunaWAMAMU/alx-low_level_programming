#include "main.h"

/**
 * _strspn - function gets length of prefix substring madeup ofbytes frm accept
 * @s: this is a Pointer to the string to be searched.
 * @accept: this is a Pointer to the string containing the bytes to be searched
 * Return: return value is Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, j, count;

	count = 0;
	for (index = 0; s[index]; index++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[index] == accept[j])
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

