#include "main.h"
/**
 * print_times_table - displays the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int r, p, res;

	if (!(n > 15 || n < 0))
	{
		for (r = 0; r <= n; r++)
		{
			for (p = 0; p <= n; p++)
			{
				res = (r * p);
				if (p != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && p != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && p != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
