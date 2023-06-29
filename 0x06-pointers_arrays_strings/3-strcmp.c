#include "main.h"
#include <stdio.h>

/**
 * _strcmp - this function compares string values
 * @s1: the first string
 * @s2: the second string
 * Return: the compared value
 **/

int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
	if (s1[index] != s2[index])
	{
	return (s1[index] - s2[index]);
	}
	index++;
	}

	return (0);
}

