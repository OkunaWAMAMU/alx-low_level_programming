#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The two strings cncatenated
 */
char *str_concat(char *s1, char *s2)
{
	int z = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[z])
		z++;

	while (s2[j])
		j++;
	l = z + j;

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= z)
		s[k] = s1[k];

		if (k >= z)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
