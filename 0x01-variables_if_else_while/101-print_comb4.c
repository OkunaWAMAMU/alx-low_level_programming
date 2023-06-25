#include <stdio.h>

/**
 * main - entry point
 * Return: Return value is 0
 **/

int main(void)
{
	int index, q, k;

	for (index = 0; index <= 7; index++)
	{
	for (q = index + 1; q <= 8; q++)
	{
	for (k = q + 1; k <= 9; k++)
	{
	putchar(index + '0');
	putchar(q + '0');
	putchar(k + '0');
	if (index != 7 || q != 8 || k != 9)
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
