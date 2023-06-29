#include "main.h"
/**
 * string_toupper - function converts all lowercase letters to uppercase
 * @string: this is an input string
 * Return: pointer to resulting string
 */

char *string_toupper(char *string)
{
	int index = 0;

	while (string[index] != '\0')
	{
	if (string[index] >= 'a' && string[index] <= 'z')
		string[index] = string[index] - 32;
	index++;
	}

	return (string);
}

