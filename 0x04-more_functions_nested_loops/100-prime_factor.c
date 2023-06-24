#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @num: the number to find the largest prime factor of
 * Return: the largest prime factor
 */
long largest_prime_factor(long num)
{
	long largest_factor = -1;
	long j;

	if (num <= 1)
		return (-1);

	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}

	for (j = 3; j <= sqrt(num); j += 2)
	{
		while (num % j == 0)
		{
			largest_factor = j;
			num /= j;
		}
	}

	if (num > 2)
		largest_factor = num;

	return (largest_factor);
}
/**
 * main - entry point
 * Return: return value is 0
 **/
int main(void)
{
	long number = 612852475143;
	long largest_factor;

	largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}

