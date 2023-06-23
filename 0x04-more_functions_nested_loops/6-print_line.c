#include "main.h"
/**
 * print_line - function that draws a straight line on the terminal
 * @n: a variable of the type integer
 * Return: void
 **/

void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (k = 1; k <= n; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
