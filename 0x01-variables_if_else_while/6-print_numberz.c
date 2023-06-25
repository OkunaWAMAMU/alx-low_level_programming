#include <stdio.h>
/**
 * main - entry point of code
 * Return: return value is 0
 **/

int main(void)
{
	int index = 0;

	while (index < 10)
	{
		putchar(index + '0');
		index++;
	}
	putchar('\n');
	return (0);
}

