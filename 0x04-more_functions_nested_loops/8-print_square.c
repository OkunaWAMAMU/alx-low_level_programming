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
	int index, f;

	for (index = 0; index < size; index++)
	{
	for (f = 0; f < size; f++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
