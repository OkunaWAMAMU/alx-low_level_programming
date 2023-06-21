#include "main.h"
/**
 * times_table - main code
(*
 * Return: Nothing.
 */
void times_table(void)
{
	int t, p, res;

	for (t = 0; t<= 9; t++)
	{
		for (p = 0; p <= 9; p++)
		{
			res = (t * p);
			if (p != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && p != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
