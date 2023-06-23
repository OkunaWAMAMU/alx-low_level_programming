#include "main.h"
/**
 * print_diagonal - function that prints a diagonal line on the terminal
 * @n: a variable of type int
 * Return : void
 **/

void print_diagonal(int n)
{
	int index, k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (index = 0; index < n; index++)
	{
	for (k = 0; k <= index; k++)
	{
	if (k == index)
	{
	_putchar('\\');
	}
	else
	{
	_putchar(' ');
	}
	}

	 _putchar('\n');
	}
	}
}

