#include "main.h"

/**
 * _strlen_recursion - main code
 * @s: string
 *
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	int vinny = 0;

	if (*s)
	{
		vinny++;
		vinny += _strlen_recursion(s + 1);
	}
	return (vinny);
}
