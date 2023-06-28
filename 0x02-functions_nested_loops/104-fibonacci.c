#include <stdio.h>

/**
 * main - Entry point
 * Return: the return value is 0
 */

int main(void)
{
	int count = 98;
	unsigned long fib1 = 1, fib2 = 2, fib;
	int i;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= count; i++)
	{
		fib = fib1 + fib2;
		printf(", %lu", fib);
		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return (0);
}

