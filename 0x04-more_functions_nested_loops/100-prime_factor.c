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
	long i;

	if (num <= 1)
		return (-1);

	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
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

