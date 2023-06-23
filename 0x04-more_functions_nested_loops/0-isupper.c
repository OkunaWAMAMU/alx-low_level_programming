#include "main.h"
/**
 * _isupper - function that checks for uppercase characters
 * @c: a variable of type integer
 * Return: 1 if uppercase and 0 if otherwise
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
