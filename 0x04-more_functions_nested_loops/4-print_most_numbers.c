#include "main.h"
/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * returns: void
 **/

void print_most_numbers(void)
{
	int index;

	for (index = 0; index <= 9; index++)
	{
		if (index != 2 && index != 4)
		{
			_putchar(index + '0');
		}
	}
	_putchar('\n');
}
