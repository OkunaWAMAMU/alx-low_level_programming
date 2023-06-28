#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers, separated by commas
 *              and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 50;
	unsigned long fib1 = 1, fib2 = 2, fib;

	printf("%lu, %lu", fib1, fib2);

	for (int i = 3; i <= count; i++)
	{
	fib = fib1 + fib2;
	printf(", %lu", fib);
	fib1 = fib2;
	fib2 = fib;
	}

	printf("\n");

	return (0);
}

