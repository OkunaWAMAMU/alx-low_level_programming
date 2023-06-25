#include <stdio.h>
/**
 * main - entry point
 * Return: the return value is 0
 **/

int main(void)
{
	int index, m;

	for (index = 0; index <= 99; index++)
	{
	for (m = 0; m < 100; m++)
	{
		if (index < m)
		{
		putchar('0' + index / 10);
		putchar('0' + index % 10);
		putchar(' ');
		putchar('0' + m / 10);
		putchar('0' + m % 10);
		if (index != 98 || m != 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
