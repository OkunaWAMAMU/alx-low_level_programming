#include <ctype.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
	if (capitalize_next && islower(str[i]))
	{
	str[i] = toupper(str[i]);
	}

	capitalize_next = 0;

	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')
	{
	capitalize_next = 1;
	}

	i++;
	}

	return (str);
}

