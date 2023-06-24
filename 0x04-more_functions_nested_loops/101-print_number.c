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
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int numDigits;
	int temp;

	numDigits = 0
	temp = n;
	while (temp != 0)
	{
		numDigits++;
		temp /= 10;
	}

	int divisor;

	divisor = 1;

	while (numDigits > 1)
	{
		divisor *= 10;
		numDigits--;
	}

	while (divisor != 0)
	{
		int digit;

		digit = n / divisor;

		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}

