#include "main.h"

/**
 * more_numbers - prints ten times numbers from 0 to 14
 * Return: returns void
 **/
void more_numbers(void)
{
	int n, k;

	for (n = 0; n <= 10; n++)
	{
	for (k = 0; k <= 14; k++)
	{
		if (k > 9)
		{
		_putchar((k / 10) + '0');
		}
		_putchar((k % 10) + '0');
	}
	_putchar('\n');

}
}
