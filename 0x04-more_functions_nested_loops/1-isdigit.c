#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c:  the variable of type int to be checked
 * Return: 1 if c is digit and 0 if otherwise
 **/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
