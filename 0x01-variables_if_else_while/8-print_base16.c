#include <stdio.h>
/**
 * main - entry point
 * Return: the return value is zero
 **/

int main(void)
{
	int index;
	char k;

	for (index = 0; index < 10; index++)
		putchar(index + '0');
	for (k = 'a'; k < 'g'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
