#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: this is the integer to be printed
 * Return: return alue is void
 */

void print_number(int n)
{
	unsigned int index;

	index = n;

	if (n < 0)
	{
		_putchar('-');
		index = -n;
	}

	if (index / 10 != 0)
		print_number(index / 10);

	_putchar((index % 10) + '0');
}

