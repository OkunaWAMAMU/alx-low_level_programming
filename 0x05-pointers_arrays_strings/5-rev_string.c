#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* rev_string - function that reverses a string
* @s: the string
* Return: returns the string in reverse
**/

void rev_string(char *s)
{
	if (s != NULL)
	{
		int length = strlen(s);
		int index;

	for (index = 0; index < length / 2; index++)
	{
		char temp = s[index];

		s[index] = s[length - 1 - index];
		s[length - 1 - index] = temp;
	}
	}
}

