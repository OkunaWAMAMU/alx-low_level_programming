#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char *create_array - function that creates an array of chars,
 * and initializes
 * it with a specific char.
 * @size: the amount of space to be related.
 * @c: character
 *
 * Return: character.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
p = (char *)malloc(size * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < size; j++)
		{
			p[j] = c;
		}

		return (p);
}
