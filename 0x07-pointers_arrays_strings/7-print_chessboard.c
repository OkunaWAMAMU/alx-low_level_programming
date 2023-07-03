#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that Prints the chessboard.
 * @a: This is the chessboard array.
 * Return value is void
 */
void print_chessboard(char (*a)[8])
{
	int index;
	int k;

	for (index = 0; index < 8; index++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[index][k]);
		}
		_putchar('\n');
	}
}

