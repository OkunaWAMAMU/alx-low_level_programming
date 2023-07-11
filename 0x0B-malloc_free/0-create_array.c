#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of an int
 * @c: The char to fill the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int z;
	char *s;

	s = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (z = 0; z < size; z++)
	{
		s[z] = c;
	}
return (s);
}

