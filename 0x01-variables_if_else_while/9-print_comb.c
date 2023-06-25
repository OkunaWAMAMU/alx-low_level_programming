#include <stdio.h>
/**
 * main - Entry point
 * Return: the return value is zero
 **/

int main(void)
{
	int index;

	for (index = 0; index <= 9; index++)
	{
	putchar(index + '0');
	if (index != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar ('\n');
	return (0);
}
