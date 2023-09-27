#include "main.h"

/**
 * _divisible - detects if n is divisible by any numbers.
 * @n: the target number.
 * @p: default starter.
 *
 * Return: divisibility.
 */
int _divisible(int n, int p)
{
	if (p == 1)
		return (0);
	if (n == p)
		return (1);
	if (n % p == 0)
		return (0);
	return (_divisible(n, p + 1));
}
/**
 * is_prime_number - function to check if number is prime.
 *
 * @n: the target number.
 *
 * Return: 1 for prime, 0 for  not prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (_divisible(n, 2));
}
