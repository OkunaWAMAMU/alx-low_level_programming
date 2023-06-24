#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Description: This function prints the given integer using _putchar
 *              without using long, arrays, pointers, or hard-coded values.
 */
void print_number(int n)
{
	int power = 1;
	int temp = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		temp = n;
	}

	while (temp >= 10)
	{
		power *= 10;
		temp /= 10;
	}

	while (power > 0)
	{
		_putchar((n / power) + '0');
		n %= power;
		power /= 10;
	}
}

