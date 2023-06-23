#include "main.h"
/**
 * print_square - a function that prints a square on the screen
 * @size: a variable of the type integer
 * Return: returns void
 **/
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
	{
	_putchar('#');
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

