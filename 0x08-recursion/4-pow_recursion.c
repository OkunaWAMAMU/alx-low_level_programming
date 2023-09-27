#include "main.h"

/**
 * _pow_recursion - will find x raised to power y and return.
 * @x: value to be raised.
 * @y: the required power.
 *
 * Return: x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
