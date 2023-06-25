#include <stdio.h>
/**
 * main - entry point
 * Return: the return value is 0
 **/

int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'q' && k != 'e')
			putchar(k);
	}
	putchar('\n');
	return (0);
}
