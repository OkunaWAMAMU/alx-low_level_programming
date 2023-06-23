#include "main.h"

/**
 * print_triangle - function that out prints a triangle
 * @size: size of the triangle
 * return: void
 */

void print_triangle(int size)
{
	int index, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (index = 0; index < size; index++)
		{
			for (k = 0; k < size - index - 1; k++)
			{
				_putchar(' ');
			}

			for (k = 0; k <= index; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

