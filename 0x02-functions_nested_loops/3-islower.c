#include "main.h"
/**
 * _islower - main code
 *@c: - a return type
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
