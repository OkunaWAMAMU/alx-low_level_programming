#include "main.h"

/**
 * _actual_sqrt_recursion - iterates to find the sqrt of a number.
 * @n: The number of interest.
 * @z: The number specimen.
 *
 * Return: z.
 */
int _actual_sqrt_recursion(int n, int z)
{
	if (z * z == n)
		return (z);
	if (n == 0 || n == 1)
		return (n);
	if (z * z > n)
		return (-1);
	return (_actual_sqrt_recursion(n, z + 1));
}
/**
 * _sqrt_recursion - function to find the square root of a number.
 *
 * @n: the number whose root is to be found.
 *
 * Return: the sqrt of the number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_actual_sqrt_recursion(n, 0));
}
