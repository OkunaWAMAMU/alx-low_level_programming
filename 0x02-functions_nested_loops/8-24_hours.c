#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function that prints every minute of Jack Bauer
 * Return: return is void
 **/

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
	for (min = 0; min < 60; min++)
	{
	_putchar('0' + (hr / 10));
	_putchar('0' + (hr % 10));
	_putchar(':');
	_putchar('0' + (min / 10));
	_putchar('0' + (min % 10));
	_putchar('\n');
	}
	}
}
