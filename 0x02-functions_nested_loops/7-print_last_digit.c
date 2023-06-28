#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints last digit of a number
 * @num: the integer
 * Return: returns the value of last digit
 **/

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);

}
