#include <stdio.h>
/**
 * main - entry point
 * Return: return value is zero
 **/

int main(void)
{
	int index, k;

	for (index = 0; index <= 8; index++)
	{
	for (k = index + 1; k <= 9; k++)
	{
	putchar(index + '0');
	putchar(k + '0');
	if (index != 8 || k != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

