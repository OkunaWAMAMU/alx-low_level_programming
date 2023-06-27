#include "main.h"

/**
 * _atoi - function that Converts a string to an integer.
 * @s: this is the string to be converted.
 *
 * Return: return value is  The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > 0)
				result = result * 10 + (s[i] - '0');
			else
				result = sign * (s[i] - '0');
		}
		else if (result != 0)
		{
			break;
		}

		i++;
	}

	return (result);
}

